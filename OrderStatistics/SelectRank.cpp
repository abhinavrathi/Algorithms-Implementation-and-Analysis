// Created by Abhinav Rathi on 06/16/2016

#include <vector>
#include <iostream>
#include <cstdlib>
#include "SelectRank.hpp"
using namespace std;
int SelectRank::rankeditem(vector<int> &arr,int n){
	return find_ranked_item(arr,n,0,arr.size());
};
int SelectRank::find_ranked_item(vector<int> &arr,int n,int p,int r){
	if(p==r)
		return arr[p];
	int q=randomized_partition(arr,p,r);
	int k=q-p+1;
	if(n==k)
		return arr[q];
	else if(n<k)
		return find_ranked_item(arr,n,p,q);
	else
		return find_ranked_item(arr,n-k,q+1,r);
};
int SelectRank::randomized_partition(vector<int> &arr,int p,int r){
	int i,j,t,x;
	t=rand()%(r-p)+p;
	x=arr[t];
	arr[t]=arr[p];
	arr[p]=x;
	j=p;
	for(i=p+1;i<r;++i){
		if(arr[i]<x){
			j++;
			t=arr[j];
			arr[j]=arr[i];
			arr[i]=t;
		}
	}
	t=arr[j];
	arr[j]=arr[p];
	arr[p]=t;
	return j;
};