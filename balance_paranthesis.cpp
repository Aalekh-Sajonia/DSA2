#include<bits/stdc++.h>
using namespace std;

bool check(string str)
{
	stack<char> myStack;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] == '{' || str[i] == '[' || str[i] == '(')
		{
		//	cout<<str[i]<<" ";
			myStack.push(str[i]);
		}
		else if(myStack.top() == '(' && str[i] == ')' )
		{
			myStack.pop();
		}
		else if(myStack.top() == '[' && str[i] == ']' )
		{
			myStack.pop();
		}
		else if(myStack.top() == '{' && str[i] == '}' )
		{
			myStack.pop();
		}
		else
		{
			return false;
		}
	}
//	cout<<"here";
	if(myStack.size()==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string str;
	cin>>str;
	if(check(str))
	{
		cout<<"Balanced";	
	}
	else
	{
		cout<<"Not Balanced";
	}
	return 0;	
}
