#include <iostream>
#include <vector>
#include "Searching/LinearSearch.hpp"
#include "Sorting/SelectionSort.hpp"
using namespace std;
int main(int argc, const char * argv[]){
	int ch;
	int N,el;
	vector<int> arr;
	vector<int>::iterator it;
	LinearSearch LS;
	SelectionSort SS;
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
					if(N>0){
						for(int i=0;i<N;++i){
							cout<<"Enter Element "<<(i+1)<<" : ";
							cin>>el;
							arr.push_back(el);
						}
						LS.initialize(arr);
						cout<<"Enter Element to be searched : ";
						cin>>el;
						cout<<"\nOUTPUT -> ";
						if(LS.search(el)){
							cout<<"Element found!\n";
						}
						else{
							cout<<"Element not found!\n";
						}
					}
					break;
			case 2: arr.clear();
					cout<<"\nEnter No. of Elements : ";
					cin>>N;
					if(N>0){
						for(int i=0;i<N;++i){
							cout<<"Enter Element "<<(i+1)<<" : ";
							cin>>el;
							arr.push_back(el);
						}
						SS.sort(arr);
						cout<<"\nOUTPUT -> ";
						for(it=arr.begin();it!=arr.end();++it){
							cout<<*it<<" ";
						}
						cout<<"\n";
					}
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