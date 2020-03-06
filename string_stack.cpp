#include<bits/stdc++.h>
using namespace std;

int findSmaller(string str,int start,int end)
{
	int temp=start;
	for(int i=start;i<end;i++)
	{
		if((int)str[temp] > (int)str[i])
		{
			temp = i;
		}
	}
	return temp;
}

int main()
{
	stack<int> s;
	string str;
	cin>>str;
	int temp;
	s.push((int)str[0]);
	for(int i=1;i<str.size();i++)
	{
		int temp = findSmaller(str,i,str.size());
		if((int)str[temp] >= s.top())
		{
			cout<<(char)s.top();
			s.pop();
			for(int j=i;j<=temp;j++)
			{
				s.push(str[j]);
			}
		}
		else
		{
			cout<<(char)str[temp];
			for(int j=i;j<temp;j++)
			{
				s.push(str[j]);
			}
		}
		i=temp;
	}
	while(s.size()!=0)
	{
		cout<<(char)s.top();
		s.pop();
	}
	return 0;
}
