// Created by Abhinav Rathi on 06/14/2016

#include <vector>
#include "LinearSearch.hpp"
using namespace std;
bool LinearSearch::search(vector<int> arr,int num){
	vector<int>::iterator it;
	for(it=arr.begin();it!=arr.end();++it){
		if(*it==num)
			return true;
	}
	return false;
};