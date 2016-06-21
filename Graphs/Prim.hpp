// Created by Abhinav Rathi on 06/21/2016

#include <vector>
using namespace std;
class Dijkstra{
private:vector<vector<int> > list;
	vector<vector<int> > distance;
	void build_min_heap();
	void min_heapify(int i);
	int remove_min();
	void set(int v,int d);
public:	void input();
	void display();
};