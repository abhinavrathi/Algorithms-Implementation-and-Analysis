// Created by Abhinav Rathi on 06/21/2016

#include <vector>
#include <iostream>
#include "Prim.hpp"
using namespace std;
void Prim::input(){
	int i,j,N,E,u,v,w;
	list.clear();
	cout<<"\nEnter number of vertices in the Graph : ";
	cin>>N;
	cout<<"Enter number of edges in the Graph : ";
	cin>>E;
	for(i=0;i<N;++i){
		vector<int> temp(N);
		for(j=0;j<N;++j){
			temp[j]=100;
		}
		list.push_back(temp);
	}
	cout<<"\nInstruction : Enter edge information. (Undirected)\nInput space separated source destination edge_weight.\n";
	for(i=0;i<E;++i){
		cout<<"Enter Edge "<<i+1<<" : ";
		cin>>u>>v>>w;
		list[u-1][v-1]=w;
		list[v-1][u-1]=w;
	}
};
void Prim::display(){
	int u,v,t,N;
	vector<int> priority_queue;
	N=list.size();
	distance.clear();
	int parent[N];
	vector<int> dist(N);
	for(u=0;u<N;++u){
		parent[u]=-1;
		vector<int> temp;
		temp.push_back(u);
		temp.push_back(100);
		distance.push_back(temp);
		dist[u]=100;
	}
	u=rand()%N;
	cout<<"\nStarting Edge:"<<u+1;
	distance[u][1]=0;
	dist[u]=0;
	parent[u]=-1;
	cout<<"\nPrim's Minimum Spanning Tree Contains following Edges : \n";
	while(distance.size()!=0){
		build_min_heap();
		t=remove_min();
		if(parent[t]!=-1)
			cout<<"("<<t+1<<","<<parent[t]+1<<")\n";
		for(v=0;v<list[t].size();++v){
			if(exists(v)&&dist[v]>list[t][v]){
				parent[v]=t;
				dist[v]=list[t][v];
				set(v,dist[v]);
			}
		}
	}
};
void Prim::build_min_heap(){
	for(int i=distance.size()/2;i>=0;--i)
		min_heapify(i);
};
void Prim::set(int v,int d){
	for(int i=0;i<distance.size();++i){
		if(distance[i][0]==v){
			distance[i][1]=d;
			break;
		}
	}
};
bool Prim::exists(int v){
	for(int i=0;i<distance.size();++i){
		if(distance[i][0]==v){
			return true;
		}
	}
	return false;
};
void Prim::min_heapify(int i){
	int l,r;
	l=2*i+1;
	r=2*i+2;
	int smaller=distance[i][1];
	int min;
	if(l<distance.size()&&distance[l][1]<smaller){
		smaller=distance[l][1];
		min=l;
	}
	if(r<distance.size()&&distance[r][1]<smaller){
		smaller=distance[r][1];
		min=r;
	}
	if(distance[i][1]!=smaller){
		int temp=distance[i][0];
		distance[i][0]=distance[min][0];
		distance[min][0]=temp;
		temp=distance[i][1];
		distance[i][1]=distance[min][1];
		distance[min][1]=temp;
		min_heapify(min);
	}
};
int Prim::remove_min(){
	if(distance.size()==0)
		return -1;
	else{
		int top=distance[0][0];
		distance[0][0]=distance[distance.size()-1][0];
		distance[0][1]=distance[distance.size()-1][1];
		distance.erase(distance.begin()+(distance.size()-1));
		min_heapify(0);
		return top;
	}
};