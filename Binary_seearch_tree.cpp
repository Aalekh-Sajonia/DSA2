#include<bits/stdc++.h>
using namespace std;

class treeNode
{
	public:
		int val;
		treeNode *left, *right;
		treeNode(int data)
		{
			this->val = data;
			this->left = NULL;
			this->right = NULL;
		}
};

treeNode *insert(treeNode *root,int data)
{
	if(root == NULL)
	{
		return new treeNode(data);
	}
	
	if(root->val > data)
	{
		root->left = insert(root->left,data); 
	}
	else
	{
		root->right = insert(root->right,data);
	}
	return root;
}

void insert1(treeNode* &root,int data)
{
	if(root == NULL)
	{
		root = new treeNode(data);
		return;
	}
	if(root->val > data)
	{
		insert1(root->left,data);
	}
	else
	{
		insert1(root->right,data);
	}
}

void insert2(treeNode **root,int data)
{
	if(*root == NULL)
	{
		*root = new treeNode(data);
		return;
	}
	if((*root)->val > data)
	{
		insert2(&((*root)->left),data);
	}
	else
	{
		insert2(&((*root)->right),data);
	}
}

void inorder(treeNode *root)
{
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
}

int main()
{
	treeNode *root = NULL;
	treeNode *root1 = NULL;
	treeNode *root2 = NULL;
//	cout<<&root<<endl;
	for(int i=0;i<5;i++)
	{
		int data;
		cin>>data;
		root = insert(root,data);
		insert1(root1,data);
		insert2(&root2,data);
	}
//	cout<<root<<endl;
	inorder(root);
	cout<<endl;
	inorder(root1);
	cout<<endl;
	inorder(root2);
	return 0;
}
