// Created by Abhinav Rathi on 06/16/2016

using namespace std;
struct node{
	int data;
	node *left,*right;
	node(){
		left=NULL;
		right=NULL;
	}
};
class BinarySearchTree{
private:node *head;
	void preorder_traversal(node *head);
public:	BinarySearchTree();
	void reset();
	void insert(int n);
	void remove(int n);
	bool search(int n);
	void preorder();
	void inorder();
	void postorder();
	int maximum();
	int minimum();
	int predecessor();
	int successor();
};