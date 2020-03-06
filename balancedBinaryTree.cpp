#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node* left;
	Node* right;
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
int flag = 1;
void findInsert(int data,Node* root,int b)
{
	if(root == NULL || flag == 0)
	{
		return ;
	}
	if(root->data == data)
	{
		Node *temp = new Node;
		temp = insert(b);
		if(root->left == NULL)
		{
			root->left = temp;
		}
		else if(root->right == NULL)
		{
			root->right = temp;
		}
		flag = 0;
		return ;
	}

	if(flag == 1)
	{	
		findInsert(data,root->left,b);
		findInsert(data,root->right,b);
	}
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
	n--;
	Node *root = new Node;
	root = insert(1);
	while(n--)
	{
		flag = 1;
		int a,b;
		cin>>a>>b;
		findInsert(a,root,b);
	}
//	print(root);
	if(isBalanced(root))
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
