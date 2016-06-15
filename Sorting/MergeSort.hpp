// Created by Abhinav Rathi on 06/15/2016

#include <vector>
using namespace std;
class MergeSort{
private:void merge_sort(vector<int> &arr,int p,int r);
	void merge(vector<int> &arr,int p,int q,int r);
public:	void sort(vector<int> &arr);
};