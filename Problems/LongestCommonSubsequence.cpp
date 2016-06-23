// Created by Abhinav Rathi on 06/23/2016

#include <string>
#include <iostream>
#include "LongestCommonSubsequence.hpp"
using namespace std;
string LongestCommonSubsequence::find_lcs(string a,string b){
	int m,n,i,j;
	string res="";
	m=a.length();
	n=b.length();
	int mat[m+1][n+1];
	for(i=0;i<=m;++i)
		mat[i][0]=0;
	for(j=0;j<=n;++j)
		mat[0][j]=0;
	for(i=1;i<=m;++i){
		for(j=1;j<=n;++j){
			if(a[i-1]==b[j-1])
				mat[i][j]=mat[i-1][j-1]+1;
			else
				mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
		}
	}
	i=m;
	j=n;
	while(i>0||j>0){
		if(mat[i][j]==mat[i-1][j])
			i=i-1;
		else if(mat[i][j]==mat[i][j-1])
			j=j-1;
		else{
			if(i!=0)
				res=a[i-1]+res;
			else
				res=b[j-1]+res;
			i-=1;
			j-=1;
		}
	}
	return res;
};