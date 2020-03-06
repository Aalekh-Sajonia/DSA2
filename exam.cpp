#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int k;
	cin>>k;
	string str1,str2;
	cin>>str1>>str2;
	
	int len = str1.length();
	int counter1, counter2;
	counter1 = counter2 = 0;
	for(int i=0;i<len;i++)
	{
		if(str1[i] == str2[i])
		{
			counter1++;
		}
		else
		{	
			counter2++;
		}
	}
	cout<<counter1<<" "<<counter2<<endl;
	int ans = 0;
	if(k>counter1)
	{
		k -= counter1;
		ans = len-k;
	}
	else 
	{
		ans = k + counter2;
	}
	cout<<ans;
	return 0;
}
