// Created by Abhinav Rathi on 06/16/2016

#include <vector>
using namespace std;
class SelectRank{
private: int find_ranked_item(vector<int> &arr,int n,int p,int r);
	int randomized_partition(vector<int> &arr,int p,int r);
public: int rankeditem(vector<int> &arr,int n);
};