// Created by Abhinav Rathi on 06/19/2016

#include <vector>
using namespace std;
class PriorityQueue{
private:vector<int> arr;
	void max_heapify(int i);
	void build_max_heap();
public:	void initialize(vector<int> a);
	int show_max();
	int remove_max();
	void insert(int n);
	void modify(int n,int x); // Modifies all occurences
};