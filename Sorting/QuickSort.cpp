// Created by Abhinav Rathi on 06/15/2016

#include <vector>
#include "QuickSort.hpp"
using namespace std;
void QuickSort::sort(vector<int> &arr){
	if(arr.size()<2)
		return;
	quick_sort(arr,0,arr.size());
};
void QuickSort::quick_sort(vector<int> &arr,int p,int r){
	if(p<r){
		int q=partition(arr,p,r);
		quick_sort(arr,p,q);
		quick_sort(arr,q+1,r);
	}
};
int QuickSort::partition(vector<int> &arr,int p,int r){
	int i,j,x,temp;
	x=arr[p];
	j=p;
	for(i=p+1;i<r;++i){
		if(arr[i]<=x){
			j++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[j];
	arr[j]=arr[p];
	arr[p]=temp;
	return j;
};