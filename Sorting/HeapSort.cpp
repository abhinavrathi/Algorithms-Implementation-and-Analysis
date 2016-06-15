// Created by Abhinav Rathi on 06/15/2016

#include <vector>
#include "HeapSort.hpp"
using namespace std;
void HeapSort::sort(vector<int> &arr){
	if(arr.size()<2)
		return;
	heapsize=arr.size();
	build_max_heap(arr);
	for(int i=arr.size()-1;i>0;--i){
		int temp=arr[heapsize-1];
		arr[heapsize-1]=arr[0];
		arr[0]=temp;
		heapsize--;
		max_heapify(arr,0);
	}
};
void HeapSort::max_heapify(vector<int> &arr,int i){
	int l,r,larger;
	l=2*i+1;	//left child
	r=2*i+2;	//right child
	if(l<heapsize&&arr[l]>arr[i])
		larger=l;
	else
		larger=i;
	if(r<heapsize&&arr[r]>arr[larger])
		larger=r;
	if(larger!=i){
		int temp=arr[i];
		arr[i]=arr[larger];
		arr[larger]=temp;
		max_heapify(arr,larger);
	}
};
void HeapSort::build_max_heap(vector<int> &arr){
	for(int i=arr.size()/2;i>=0;--i)
		max_heapify(arr,i);
};