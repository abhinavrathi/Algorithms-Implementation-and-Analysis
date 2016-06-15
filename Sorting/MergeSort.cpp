// Created by Abhinav Rathi on 06/15/2016

#include <vector>
#include "MergeSort.hpp"
using namespace std;
void MergeSort::sort(vector<int> &arr){
	if(arr.size()<2)
		return;
	merge_sort(arr,0,arr.size()-1);
};
void MergeSort::merge_sort(vector<int> &arr,int p,int r){
	if(p<r){
		int mid=(p+r)/2;
		merge_sort(arr,p,mid);
		merge_sort(arr,mid+1,r);
		merge(arr,p,mid,r);
	}
};
void MergeSort::merge(vector<int> &arr,int p,int q,int r){
	vector<int> LHS,RHS;
	int i,j,k;
	for(i=p;i<=q;++i){
		LHS.push_back(arr[i]);
	}
	for(i=q+1;i<=r;++i){
		RHS.push_back(arr[i]);
	}
	i=p;
	j=k=0;
	while(j<(q-p+1)&&k<(r-q)){
		if(LHS[j]<RHS[k])
			arr[i++]=LHS[j++];
		else
			arr[i++]=RHS[k++];
	}
	while(j<(q-p+1))
		arr[i++]=LHS[j++];
	while(k<(r-q))
		arr[i++]=RHS[k++];
};