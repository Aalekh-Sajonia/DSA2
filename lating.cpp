#include<bits/stdc++.h>
using namespace std;
int main()
{
//	string arr[12][2] = {
//		{"a","as"},
//		{"i","ios"},
//		{"l","les"},
//		{"n","anes"},
//		{"ne","anes"},
//		{"o","os"},
//		{"r","res"},
//		{"t","tas"},
//		{"u","us"},
//		{"v","ves"},
//		{"w","was"},
//		{"y","ios"}
//	}
//	;
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		if(str[str.length()-1]=='e' && str[str.length()-2]=='n')
		{
			str = str.substr(0,str.length()-2);
			str += "anes";	
		}
		else if(str[str.length()-1]=='a')
		{
			str = str.substr(0,str.length()-1);
			str += "as";
		}
		else if(str[str.length()-1]=='i')
		{
			str = str.substr(0,str.length()-1);
			str += "ios";
		}
		else if(str[str.length()-1]=='l')
		{
			str = str.substr(0,str.length()-1);
			str += "les";
		}
		else if(str[str.length()-1]=='n')
		{
			str = str.substr(0,str.length()-1);
			str += "anes";
		}
		else if(str[str.length()-1]=='o')
		{
			str = str.substr(0,str.length()-1);
			str += "os";
		}
		else if(str[str.length()-1]=='r')
		{
			str = str.substr(0,str.length()-1);
			str += "res";
		}
		else if(str[str.length()-1]=='t')
		{
			str = str.substr(0,str.length()-1);
			str += "tas";
		}
		else if(str[str.length()-1]=='u')
		{
			str = str.substr(0,str.length()-1);
			str += "us";
		}
		else if(str[str.length()-1]=='v')
		{
			str = str.substr(0,str.length()-1);
			str += "ves";
		}
		else if(str[str.length()-1]=='w')
		{
			str = str.substr(0,str.length()-1);
			str += "was";
		}
		else if(str[str.length()-1]=='y')
		{
			str = str.substr(0,str.length()-1);
			str += "ios";
		}
		else
		{
			str += "us";
		}
		cout<<str<<endl;
	}
	return 0;
}
