// Created by Abhinav Rathi on 06/19/2016

#include <vector>
#include <iostream>
#include "MaximumSubarray.hpp"
using namespace std;
void MaximumSubarray::sum(vector<int> arr){
	int max,l,r,sum,l_max,r_max;
	sum=max=arr[0];
	l_max=r_max=l=r=0;
	for(int i=1;i<arr.size();++i){
		if(sum+arr[i]>arr[i]){
			sum+=arr[i];
			r=i;
		}
		else{
			sum=arr[i];
			l=r=i;
		}
		if(sum>max){
			max=sum;
			l_max=l;
			r_max=r;
		}
	}
	cout<<"Maximum Subarray is ";
	for(int i=l_max;i<=r_max;++i)
		cout<<arr[i]<<" ";
	cout<<"with sum "<<max<<"\n";
};