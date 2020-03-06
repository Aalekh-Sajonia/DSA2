#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *root = NULL;

void insert(int a,int incr)
{
    node *temp = new node;
    if(root==NULL)
    {
        temp->data = a+incr;
        root = temp;
        temp->next = NULL;
    }
    else
    {
        node *itr;
        itr = root;
        while(itr->next!=NULL)
        {
            itr = itr->next;
        }
        temp->data = a+incr;
        temp->next = NULL;
        itr->next = temp;
    }
}

void trav()
{
    node *trav;
    trav = root;
    while(trav!=NULL)
    {
        cout<<trav->data;
        trav = trav->next;
    }
}

void remove()
{
	node *temp;
	temp = root;
	root = root->next;
	delete temp; 
}

int size()
{
	node *temp = root;
	int count = 0;
	while(temp!=NULL)
	{
		temp = temp->next;
		count++;
	}
	return count;
}

void del(int n)
{

	node *temp = root;
	node *prev = root;
	int count = 1;
	while(temp!=NULL)
	{
		if(count == n)
		{
			prev->next = temp->next;
			delete temp;
			break;
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
}

int main()
{
    int n;
    cin>>n;
    string str;
    str = to_string(n);
    for(int i=0;i<str.length();i++)
    {
    	if(i==str.length()-1)
    	{
    		insert((int)str[i]-48,1);	
		}
      	else
		{
      		insert((int)str[i]-48,0);	
		}
	}  
	trav();
    return 0;
}
