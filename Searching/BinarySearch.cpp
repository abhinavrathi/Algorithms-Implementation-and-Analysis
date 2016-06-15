// Created by Abhinav Rathi on 06/15/2016

#include <vector>
#include "BinarySearch.hpp"
using namespace std;
bool BinarySearch::search(vector<int> arr,int num){
	return binary_search(arr,num,0,arr.size()-1);
};
bool BinarySearch::binary_search(vector<int> arr,int num,int s,int e){
	int m=(s+e)/2;
	if(arr[m]==num)
		return true;
	else if(arr[m]>num&&m!=s)
		return binary_search(arr,num,s,m-1);
	else if(m!=e)
		return binary_search(arr,num,m+1,e);
	return false;
};