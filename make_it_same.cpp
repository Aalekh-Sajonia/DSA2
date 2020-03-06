#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str1,str2;
	cin>>str1>>str2;
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(str1[i] == str2[i])
		{
				continue;
		}
		else
		{
			if(str1[i+1] == str2[i+1]) 
			{
				count++;
			}
			else
			{
				if(str1[i]!=str1[i+1])
				{
					swap(str1[i],str1[i+1]);
					count++;
				}
				else
				{
					count++;
				}
			}
		}
	}
	if(str1[n-1] != str2[n-1])
	{
		count++;
	}
 	cout<<count;
 	return 0;
}
