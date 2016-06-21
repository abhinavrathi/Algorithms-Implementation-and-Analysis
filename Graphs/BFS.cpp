// Created by Abhinav Rathi on 06/21/2016

#include <vector>
#include <iostream>
#include "BFS.hpp"
using namespace std;
void BFS::input(){
	int N,i,v;
	list.clear();
	cout<<"\nEnter number of vertices in the Graph : ";
	cin>>N;
	cout<<"\nInstruction : Enter destination nodes for each node below. (Directed)\nInput space separated and end with a -1 destination.\n";
	for(i=0;i<N;++i){
		vector<int> temp;
		cout<<"Enter destination nodes of source node "<<(i+1)<<" : ";
		do{
			cin>>v;
			if(v!=-1)
				temp.push_back(v-1);
		}while(v!=-1);
		list.push_back(temp);
	}
};
void BFS::display(){
	int u,v,t,N;
	vector<int> queue;
	N=list.size();
	int visited[N],edges[N];
	for(u=0;u<N;++u)
		edges[u]=visited[u]=0;
	cout<<"Enter source node : ";
	cin>>u;
	queue.push_back(u-1);
	cout<<"\nBreadth First Search from Node "<<u<<" ->";
	while(queue.size()!=0){
		t=queue.front();
		queue.erase(queue.begin());
		visited[t]=1;
		cout<<" "<<t+1;
		for(v=0;v<list[t].size();++v){
			if(visited[list[t][v]]==0){
				edges[list[t][v]]=edges[t]+1;
				queue.push_back(list[t][v]);
				visited[list[t][v]]=1;
			}
		}
	}
	cout<<"\nNode\t# of Edges";
	for(t=0;t<N;++t){
		cout<<"\n"<<t+1<<"\t";
		if(t==u-1){
			cout<<"Source";
		}
		else if(edges[t]==0){
			cout<<"Unreachable";
		}
		else{
			cout<<edges[t];
		}
	}
	cout<<"\n";
};