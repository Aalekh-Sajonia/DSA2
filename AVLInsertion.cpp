#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
	int height;
};

int height(Node *n)
{
	if(n== NULL)
	{
		return 0;
	}
	return n->height;
}

Node *newNode(int data)
{
	Node *node = new Node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return node;
}

Node *rightRotate(Node *x)
{
	Node *y = x->left;
	Node *temp = y->right;
	
	y->right = x;
	x->left = temp;
	
	x->height = max(height(x->right),height(x->left))+1;
	y->height = max(height(y->right),height(y->left)) + 1;
	
	return y;
}

Node *leftRotate(Node *x)
{
	Node *y = x->right;
	Node *temp = y->left;
	
	y->left = x;
	x->right = temp;
	
	x->height = max(height(x->left), height(x->right))+1;
	y->height = max(height(y->left), height(y->right))+1;
	
	return y;
}

int getBalance(Node *n)
{
	if(n==NULL)
	{
		return 0;
	}
	
	return height(n->left) - height(n->right);
}

Node *insert(Node *n,int k)
{
	if(n==NULL)
	{
		return newNode(k);
	}
	
	if(k < n->data)
	{
		n->left = insert(n->left,k);
	}
	else if(k > n->data)
	{
		n->right = insert(n->right,k);
	}
	else
	{
		return n;
	}
	
	n->height = max(height(n->left), height(n->right))+1;
	
	int balance = getBalance(n);
	
	if(balance>1 && k < n->left->data)
	{
		return rightRotate(n);
	}
	
	if(balance<-1 && k > n->right->data)
	{
		return leftRotate(n);	
	}	
	
	if(balance > 1 && k > n->left->data)
	{
		n->left = leftRotate(n->left);
		return rightRotate(n);
	}
	
	if(balance < -1 && k < n->right->data)
	{
		n->right = rightRotate(n->right);
		return leftRotate(n);
	}
	
	return n;
}

void preOrder(Node *n)
{
	if(n==NULL)
	{
		return ;
	}
	
	cout<<n->data<<" ";
	preOrder(n->left);
	preOrder(n->right);
}

int main()
{
	Node *root = NULL;
	
 	root = insert(root, 10);  
    root = insert(root, 20);  
    root = insert(root, 30);  
    root = insert(root, 40);  
    root = insert(root, 50);  
    root = insert(root, 25);
	preOrder(root);	
	cout<<"test";
	return 0;
}
