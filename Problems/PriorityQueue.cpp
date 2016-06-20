// Created by Abhinav Rathi on 06/19/2016

#include <vector>
#include <iostream>
#include "PriorityQueue.hpp"
using namespace std;
void PriorityQueue::initialize(vector<int> a){
	arr=a;
	build_max_heap();
};
void PriorityQueue::build_max_heap(){
	for(int i=arr.size()/2;i>=0;--i)
		max_heapify(i);
};
void PriorityQueue::max_heapify(int i){
	int l,r;
	l=2*i+1;
	r=2*i+2;
	int larger=arr[i];
	int max;
	if(l<arr.size()&&arr[l]>larger){
		larger=arr[l];
		max=l;
	}
	if(r<arr.size()&&arr[r]>larger){
		larger=arr[r];
		max=r;
	}
	if(arr[i]!=larger){
		int temp=arr[i];
		arr[i]=arr[max];
		arr[max]=temp;
		max_heapify(max);
	}
};
int PriorityQueue::show_max(){
	if(arr.size()==0)
		return -1;
	else
		return arr[0];
};
int PriorityQueue::remove_max(){
	if(arr.size()==0)
		return -1;
	else{
		int top=arr[0];
		arr[0]=arr[arr.size()-1];
		arr.pop_back();
		max_heapify(0);
		return top;
	}
};
void PriorityQueue::insert(int n){
	arr.push_back(n);
	int i=arr.size()-1;
	while((i-1)/2>=0&&arr[(i-1)/2]<arr[i]){
		int temp=arr[(i-1)/2];
		arr[(i-1)/2]=arr[i];
		arr[i]=temp;
		i=(i-1)/2;
	}
};
void PriorityQueue::modify(int n,int x){
	for(int i=0;i<arr.size();++i){
		if(arr[i]==n){
			arr[i]=x;
			if(x<n){
				max_heapify(i);
			}
			else{
				int j=i;
				while((j-1)/2>=0&&arr[(j-1)/2]<arr[j]){
					int temp=arr[j];
					arr[j]=arr[(j-1)/2];
					arr[(j-1)/2]=temp;
					j=(j-1)/2;
				}
			}
		}
	}
};