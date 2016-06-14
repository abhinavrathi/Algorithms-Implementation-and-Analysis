#include <iostream>
#include <vector>
#include "Searching/LinearSearch.hpp"
using namespace std;
int main(int argc, const char * argv[]){
	int ch;
	int N,el;
	vector<int> arr;
	LinearSearch Obj;
	do{
		cout<<"\n=========\n";
		cout<<"MAIN MENU";
		cout<<"\n=========\n";
		cout<<"Press 1 for Searching Tools.\n";
		cout<<"Press 2 for Sorting Tools.\n";
		cout<<"Press 3 for Order Statistic Tools.\n";
		cout<<"Press 4 for Tree Tools.\n";
		cout<<"Press 5 for Graph Tools.\n";
		cout<<"Press 0 to Exit.\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 0: cout<<"\nProgram will now Exit!\n\n";
					break;
			case 1: arr.clear();
					cout<<"\nEnter No. of Elements : ";
					cin>>N;
					for(int i=0;i<N;++i){
						cout<<"Enter Element "<<(i+1)<<" : ";
						cin>>el;
						arr.push_back(el);
					}
					Obj.initialize(arr);
					cout<<"Enter Element to be searched : ";
					cin>>el;
					cout<<"\nOUTPUT -> ";
					if(Obj.search(el)){
						cout<<"Element found!\n";
					}
					else{
						cout<<"Element not found!\n";
					}
					break;
			case 2:
					break;
			case 3:
					break;
			case 4:
					break;
			case 5:
					break;
		}
	}while(ch!=0);
	return 0;
}