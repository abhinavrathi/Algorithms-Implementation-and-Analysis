// Created by Abhinav Rathi on 06/15/2016

#include <vector>
using namespace std;
class HeapSort{
private:int heapsize;
	void max_heapify(vector<int> &arr,int i);
	void build_max_heap(vector<int> &arr);
public: void sort(vector<int> &arr);
};