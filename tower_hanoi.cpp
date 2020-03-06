#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char start, char dest, char remain) 
{ 
	if (n == 1) 
	{ 
		cout<< "1:"<<start<<"->"<<dest<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1, start, remain, dest); 
	cout<<n<< ":"<<start<<"->"<<dest<<endl; 
	towerOfHanoi(n - 1, remain, dest, start); 
} 


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 
		towerOfHanoi(n, 'A', 'C', 'B');
	}
	return 0; 
} 

