#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
	int n = str.length();
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		if(str[i] != str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main()
{
	string str;
	cin>>str;
	int count = 0;
	int flag = 0;
	while(str.length() > 0)
	{	
		if(isPalindrome(str))
		{
			flag = 1;
			break;
		}
		else
		{
			count++;
			str.erase(str.begin() + str.length() - 1);
		}
	}
	if(flag)
	{
		cout<<count;
	}
	return 0;
}
