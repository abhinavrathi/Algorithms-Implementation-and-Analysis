// Created by Abhinav Rathi on 06/15/2016

#include <vector>
#include "InsertionSort.hpp"
using namespace std;
void InsertionSort::sort(vector<int> &arr){
	if(arr.size()<2)
		return;
	int i,j,key;
	for(i=1;i<arr.size();++i){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
};