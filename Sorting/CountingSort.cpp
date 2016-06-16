// Created by Abhinav Rathi on 06/16/2016

#include <vector>
#include <stdlib.h>
#include "CountingSort.hpp"
using namespace std;
vector<int> CountingSort::sort(vector<int> arr){
	int i,l,max;
	l=arr.size();
	if(l<2)
		return arr;
	max=arr[0];
	for(i=1;i<l;++i)
		if(arr[i]>max)
			max=arr[i];
	int *temp_arr=(int*)malloc((max+1)*sizeof(int));
	vector<int> res(l);
	for(i=0;i<=max;++i)
		temp_arr[i]=0;
	for(i=0;i<l;++i)
		temp_arr[arr[i]]++;
	for(i=1;i<=max;++i)
		temp_arr[i]+=temp_arr[i-1];
	for(i=l-1;i>=0;--i){
		res[temp_arr[arr[i]]-1]=arr[i];
		temp_arr[arr[i]]--;
	}
	return res;
};