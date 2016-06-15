// Created by Abhinav Rathi on 06/15/2016

#include <vector>
using namespace std;
class QuickSort{
private:void quick_sort(vector<int> &arr,int p,int r);
	int partition(vector<int> &arr,int p,int r);
public:	void sort(vector<int> &arr);
};