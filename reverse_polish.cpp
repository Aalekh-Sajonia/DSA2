#include<bits/stdc++.h>
using namespace std;

void calculate(stack<string> &str,char ope)
{
	int a = stoi(str.top());
	str.pop();
	int b = stoi(str.top());	
	str.pop();
	if(ope == '-')
	{
		str.push(to_string(a-b));
	}
	else if(ope == '+')
	{
		str.push(to_string(a+b));
	}
		else if(ope == '*')
	{
		str.push(to_string(a*b));
	}	
	else if(ope == '/')
	{
		str.push(to_string(b/a);
	}
}

int main()
{
	int n;
	cin>>n;
	string *str = new string[n];
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	
	stack<string> sta;
	int i = 0;
	while(i<n) 
	{
		if(str[i] == "+" || str[i] == "-" || str[i] == "/" || str[i] == "*")
		{
			calculate(sta,str[i][0]);
		}
		else
		{
//			cout<<str[i]<<" ";
			sta.push(str[i]);
		}
		i++;
	}
	cout<<sta.top();
	return 0;
}
