#include<bits/stdc++.h>
using namespace std;

void reverseK(queue<int> &q,int n,int k)
{

	stack<int> myStack;
	
	for(int i=0;i<k;i++)
	{
		myStack.push(q.front());
		q.pop();
	}
	
	while(!myStack.empty())
	{
		q.push(myStack.top());
		myStack.pop();
	}
	
	for(int i=0;i<q.size() - k ;i++)
	{
		q.push(q.front());
		q.pop();
	}
}

void print(queue<int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
}

int main()
{
	queue<int> myQueue;
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		myQueue.push(a);
	}
	reverseK(myQueue,n,k);
	print(myQueue);
	return 0;
}
