#include<bits/stdc++.h>
using namespace std;

string cal(int n)
{
	if(n<=0)
	{
		return "";
	}
	string str = "1";
	while(n>1)
	{
		string temp;
		for(int i=0;i<str.length();i++)
		{
			int count = 1;
			while( i+1 < str.length() && str[i] == str[i+1])
			{
				count++;
				i++;
			}
		//	cout<<count<<endl;
			temp += to_string(count);
			temp += str[i];
		}
		str = temp;
		n--;
	}
	return str;
}

int main()
{
	int n;
	cin>>n;
	string str = cal(n);
	cout<<str;
	return 0;
}
