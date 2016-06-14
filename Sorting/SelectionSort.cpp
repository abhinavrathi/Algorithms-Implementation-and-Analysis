// Created by Abhinav Rathi on 06/14/2016

#include <vector>
#include "SelectionSort.hpp"
using namespace std;
void SelectionSort::sort(vector<int> &arr){
	if(arr.size()<2)
		return;
	vector<int>::iterator it,jt;
	int temp;
	for(it=arr.begin();it!=arr.end()-1;++it){
		vector<int>::iterator min=it;
		for(jt=it+1;jt!=arr.end();++jt){
			if(*jt<*min){
				min=jt;
			}
		}
		if(min!=it){
			temp=*it;
			*it=*min;
			*min=temp;
		}
	}
};