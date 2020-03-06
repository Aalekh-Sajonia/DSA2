#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};
node *root = NULL;

void insert(int a)
{
	node *temp = new node;
	temp->data = a;
	temp->next = NULL;
	if(root == NULL)
	{
		root = temp; 
	}
	else
	{
		node *trav = root;
		while(trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = temp;
	}
}

void trav()
{
	node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
}

void reverse()
{
	node *left = NULL;
	node *current = root;
	node *right = root;
	
	while(right!=NULL)
	{
		right = current->next;
		current->next = left;
		left = current;
		current = right;
	}
	root = left;
}

void addOne()
{
	int carry = 1;
	node *temp = root;
	
	while(temp!=NULL)
	{
		int sum = temp->data+carry;
		
		carry = (sum>=10) ? 1: 0;
		
		sum = sum%10;
		
		temp->data = sum;
		
		temp = temp->next;
	}
	if(carry>0)
	{
		insert(carry);
	}
}

int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		insert(str[i]-48);
	}
	reverse();
	addOne();
	reverse();
	trav();
	return 0;
}
