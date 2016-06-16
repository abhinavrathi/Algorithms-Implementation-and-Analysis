#include <iostream>
#include <vector>
#include "Searching/LinearSearch.hpp"
#include "Searching/BinarySearch.hpp"
#include "Sorting/SelectionSort.hpp"
#include "Sorting/InsertionSort.hpp"
#include "Sorting/MergeSort.hpp"
#include "Sorting/QuickSort.hpp"
#include "Sorting/HeapSort.hpp"
#include "Sorting/CountingSort.hpp"
#include "OrderStatistics/SelectRank.hpp"
#include "Tree/BinarySearchTree.hpp"
using namespace std;
int main(int argc, const char * argv[]){
	int ch,subch;
	int N,el;
	bool found;
	vector<int> arr;
	vector<int>::iterator it;
	LinearSearch LS;
	BinarySearch BS;
	SelectionSort SS;
	InsertionSort IS;
	MergeSort MS;
	QuickSort QS;
	HeapSort HS;
	CountingSort CS;
	SelectRank SR;
	BinarySearchTree BST;
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
			case 0:	cout<<"\nProgram will now Exit!\n\n";
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
					cout<<"\nEnter Element to be searched : ";
					cin>>el;
					do{
						cout<<"\n=========\n";
						cout<<"SUB MENU";
						cout<<"\n=========\n";
						cout<<"Press 1 for Linear Search.\n";
						cout<<"Press 2 for Binary Search.\n";
						cout<<"Enter your choice : ";
						cin>>subch;
						if(subch>2||subch<0)
							cout<<"\nIllegal Choice!\n";
					}while(subch>2||subch<0);
					switch(subch){
						case 1: found=LS.search(arr,el);
							break;
						case 2:	QS.sort(arr);
							found=BS.search(arr,el);
							break;
					}
					cout<<"\nOUTPUT -> ";
					if(found){
						cout<<"Element found!\n";
					}
					else{
						cout<<"Element not found!\n";
					}
				}
				break;
			case 2:	arr.clear();
				cout<<"\nEnter No. of Elements : ";
				cin>>N;
				if(N>0){
					for(int i=0;i<N;++i){
						cout<<"Enter Element "<<(i+1)<<" : ";
						cin>>el;
						arr.push_back(el);
					}
					do{
						cout<<"\n=========\n";
						cout<<"SUB MENU";
						cout<<"\n=========\n";
						cout<<"Press 1 for Selection Sort.\n";
						cout<<"Press 2 for Insertion Sort.\n";
						cout<<"Press 3 for Merge Sort.\n";
						cout<<"Press 4 for Quick Sort.\n";
						cout<<"Press 5 for Heap Sort.\n";
						cout<<"Press 6 for Counting Sort.\n";
						cout<<"Enter your choice : ";
						cin>>subch;
						if(subch>6||subch<0)
							cout<<"\nIllegal Choice!\n";
					}while(subch>6||subch<0);
					switch(subch){
						case 1: SS.sort(arr);
							break;
						case 2: IS.sort(arr);
							break;
						case 3: MS.sort(arr);
							break;
						case 4: QS.sort(arr);
							break;
						case 5: HS.sort(arr);
							break;
						case 6: arr=CS.sort(arr);
							break;
					}
					cout<<"\nOUTPUT -> ";
					for(it=arr.begin();it!=arr.end();++it){
						cout<<*it<<" ";
					}
					cout<<"\n";
				}
				break;
			case 3:	arr.clear();
				cout<<"\nEnter No. of Elements : ";
				cin>>N;
				if(N>0){
					for(int i=0;i<N;++i){
						cout<<"Enter Element "<<(i+1)<<" : ";
						cin>>el;
						arr.push_back(el);
					}
					do{
						cout<<"\nEnter Rank to be searched : ";
						cin>>el;
						if(el>N||el<1)
							cout<<"\nIllegal Choice!\n";
					}while(el>N||el<1);
					cout<<"\nOUTPUT -> ";
					cout<<"Item at Rank "<<el<<" is "<<SR.rankeditem(arr,el)<<"\n";
				}
				break;
			case 4:	BST.reset();
				do{
					cout<<"\n=========\n";
					cout<<"SUB MENU";
					cout<<"\n=========\n";
					cout<<"Press 1 to Insert an Element.\n";
					cout<<"Press 2 to Delete an Element.\n";
					cout<<"Press 3 to Display Tree (Preorder Traversal).\n";
					cout<<"Press 4 to Display Tree (Inorder Traversal).\n";
					cout<<"Press 5 to Display Tree (Postorder Traversal).\n";
					cout<<"Press 6 to Search an Element.\n";
					cout<<"Press 7 to Display Maximum Element.\n";
					cout<<"Press 8 to Display Minimum Element.\n";
					cout<<"Press 9 to Display Predecessor.\n";
					cout<<"Press 10 to Display Successor.\n";
					cout<<"Press 0 to Exit.\n";
					cout<<"Enter your choice : ";
					cin>>subch;
					switch(subch){
						case 0:	break;
						case 1:	cout<<"\nEnter Element to Insert : ";
							cin>>el;
							BST.insert(el);
							break;
						case 2:	cout<<"\nEnter Element to Delete : ";
							cin>>el;
							BST.remove(el);
							break;
						case 3:	cout<<"\nOUTPUT -> ";
							BST.preorder();
							cout<<"\n";
							break;
						case 4:	BST.inorder();
							break;
						case 5:	BST.postorder();
							break;
						case 6:	cout<<"\nEnter Element to Search : ";
							cin>>el;
							BST.search(el);
							break;
						case 7:	
							break;
						case 8:	
							break;
						case 9:	
							break;
						case 10:	
							break;
						default:cout<<"\nIllegal Choice!\n";
					}
				}while(subch!=0);
				break;
			case 5:	
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=0);
	return 0;
}