// Created by Abhinav Rathi on 06/16/2016

#include <iostream>
#include "BinarySearchTree.hpp"
using namespace std;
BinarySearchTree::BinarySearchTree(){
	head=NULL;
};
void BinarySearchTree::reset(){
	head=NULL;
};
void BinarySearchTree::insert(int n){
	if(head==NULL){
		head=new node();
		head->data=n;
	}
	else{
		node *temp=head;
		while(1){
			if(temp->data>n&&temp->left)
				temp=temp->left;
			else if(temp->right)
				temp=temp->right;
			else
				break;
		}
		if(temp->data>n){
			temp->left=new node();
			temp->left->data=n;
		}
		else{
			temp->right=new node();
			temp->right->data=n;
		}
	}
	cout<<"\nElement "<<n<<" Inserted in the Tree!\n";
};
void BinarySearchTree::remove(int n){

};
bool BinarySearchTree::search(int n){
	return true;
};
void BinarySearchTree::preorder(){
	preorder_traversal(head);
};
void BinarySearchTree::preorder_traversal(node *head){
	if(head){
		preorder_traversal(head->left);
		cout<<head->data<<" ";
		preorder_traversal(head->right);
	}
};
void BinarySearchTree::inorder(){

};
void BinarySearchTree::postorder(){

};
int BinarySearchTree::maximum(){
	return 0;
};
int BinarySearchTree::minimum(){
	return 0;
};
int BinarySearchTree::predecessor(){
	return 0;
};
int BinarySearchTree::successor(){
	return 0;
};