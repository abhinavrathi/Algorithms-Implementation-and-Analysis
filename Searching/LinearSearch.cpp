// Created by Abhinav Rathi on 06/14/2016

#include <vector>
#include "LinearSearch.hpp"
using namespace std;
LinearSearch::LinearSearch(){
	;
};
void LinearSearch::initialize(vector<int> arr){
	list=arr;
};
bool LinearSearch::search(int num){
	vector<int>::iterator it;
	for(it=list.begin();it!=list.end();++it){
		if(*it==num)
			return true;
	}
	return false;
};