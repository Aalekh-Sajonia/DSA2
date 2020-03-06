#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left = NULL;
	Node* right = NULL;
};
Node *insert(int data)
{
	Node *newNode = new Node;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int height(Node *root)
{
	if(root== NULL)
	{
		return 0;
	}
	
	return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(Node *root)
{
	if(root == NULL)
	{
		return true;
	}
	
	int lHeight = height(root->left);
	int rHeight = height(root->right);
	
	if(abs(lHeight-rHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
	{
		return true;
	}
	
	return false;
}

void print(Node *root)
{
	if(root == NULL)
	{
		return ;
	}
	
	print(root->left);
	cout<<root->data<<" ";
	print(root->right);
	return ;
}

int main()
{
	int n;
	cin>>n;
	Node *root = new Node[n+1];
	n--;
	root[1].data = 1;
	root[1].left = NULL;
	root[1].right= NULL;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		root[b].data = b;
		if(root[a].left == NULL)
		{
			root[a].left = &root[b];
		}
		else if(root[a].right == NULL)
		{
			root[a].right = &root[b];
		}
	}
//	print(&root[1]);
	if(isBalanced(&root[1]))
	{
		cout<<"YES";
	}
	else 
	{
		cout<<"NO";
	}
	cout<<endl;
	return 0;
}
