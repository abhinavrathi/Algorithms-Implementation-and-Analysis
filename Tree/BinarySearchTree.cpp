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
	if(search(n)){
		node *temp=head;
		node *prev=head;
		while(temp->data!=n){
			prev=temp;
			if(temp->data>n)
				temp=temp->left;
			else
				temp=temp->right;
		}
		if(temp==head){
			if(head->left==NULL)
				head=head->right;
			else if(head->right==NULL)
				head=head->left;
			else{
				int pred=predecessor(n);
				remove(pred);
				head->data=pred;
			}
		}
		else if(temp->left==NULL){
			if(prev->left==temp)
				prev->left=temp->right;
			else
				prev->right=temp->right;
		}
		else if(temp->right==NULL){
			if(prev->left==temp)
				prev->left=temp->left;
			else
				prev->right=temp->left;
		}
		else{
			int pred=predecessor(n);
			remove(pred);
			temp->data=pred;
		}
	}
	else
		cout<<"\nElement "<<n<<" Not Found in the Tree!\n";
};
bool BinarySearchTree::search(int n){
	node *temp=head;
	while(temp!=NULL&&temp->data!=n){
		if(temp->data>n)
			temp=temp->left;
		else
			temp=temp->right;
	}
	if(temp)
		return true;
	return false;
};
void BinarySearchTree::preorder(){
	preorder_traversal(head);
};
void BinarySearchTree::preorder_traversal(node *head){
	if(head){
		cout<<head->data<<" ";
		preorder_traversal(head->left);
		preorder_traversal(head->right);
	}
};
void BinarySearchTree::inorder(){
	inorder_traversal(head);
};
void BinarySearchTree::inorder_traversal(node *head){
	if(head){
		inorder_traversal(head->left);
		cout<<head->data<<" ";
		inorder_traversal(head->right);
	}
};
void BinarySearchTree::postorder(){
	postorder_traversal(head);
};
void BinarySearchTree::postorder_traversal(node *head){
	if(head){
		postorder_traversal(head->left);
		postorder_traversal(head->right);
		cout<<head->data<<" ";
	}
};
int BinarySearchTree::maximum(){
	return maximum_at_node(head);
};
int BinarySearchTree::maximum_at_node(node *head){
	if(!head)
		return -1;
	node *temp=head;
	while(temp->right)
		temp=temp->right;
	return temp->data;
};
int BinarySearchTree::minimum(){
	return minimum_at_node(head);
};
int BinarySearchTree::minimum_at_node(node *head){
	if(!head)
		return -1;
	node *temp=head;
	while(temp->left)
		temp=temp->left;
	return temp->data;
};
int BinarySearchTree::predecessor(int n){
	if(head){
		node *temp=head;
		while(temp!=NULL&&temp->data!=n){
			if(temp->data>n)
				temp=temp->left;
			else if(temp->data<n)
				temp=temp->right;
		}
		if(temp){
			if(temp->left){
				return maximum_at_node(temp->left);
			}
			else{
				if(head->data==n)
					return -1;
				node *it=head;
				int res=-1;
				while(it->left!=temp&&it->right!=temp){
					if(it->data>n){
						it=it->left;
					}
					else if(it->data<n){
						res=it->data;
						it=it->right;
					}
				}
				if(it->right==temp)
					res=it->data;
				return res;
			}
		}
		else
			return -2;
	}
	return -3;
};
int BinarySearchTree::successor(int n){
	if(head){
		node *temp=head;
		while(temp!=NULL&&temp->data!=n){
			if(temp->data>n)
				temp=temp->left;
			else if(temp->data<n)
				temp=temp->right;
		}
		if(temp){
			if(temp->right){
				return minimum_at_node(temp->right);
			}
			else{
				if(head->data==n)
					return -1;
				node *it=head;
				int res=-1;
				while(it->left!=temp&&it->right!=temp){
					if(it->data>n){
						res=it->data;
						it=it->left;
					}
					else if(it->data<n){
						it=it->right;
					}
				}
				if(it->left==temp)
					res=it->data;
				return res;
			}
		}
		else
			return -2;
	}
	return -3;
};