#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	string s;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			s += toupper(str[i]);
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			s += str[i];
		}
	}
	int i=0;
	int j = s.size()-1;
	int flag=0;
	while(i<=j)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
		i++;
		j--;
	}
	if(flag)
	{
		cout<<"0";
	}
	else
	{
		cout<<"1";
	}
	return 0;
}
