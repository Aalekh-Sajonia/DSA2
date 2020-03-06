#include<bits/stdc++.h>
using namespace std;

int bits(int n)
{
	return (int)log2(n)+1;
}

int toggleBit(int n, int k) 
{ 
    return (n ^ (1 << (k-1))); 
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		int noOfBits = bits(a);
//		cout<<noOfBits;
		if(noOfBits%2 == 0)
		{
			int temp = noOfBits/2;
			int temp1 = toggleBit(a,temp);	
			cout<<toggleBit(temp1,temp+1);		
		}
		else 
		{
			int temp = noOfBits/2;
			temp++;
			cout<<toggleBit(a,temp)<<endl;
		}
	}
	return 0;
}
