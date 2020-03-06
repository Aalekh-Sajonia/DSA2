#include<bits/stdc++.h>
using namespace std;

//bool comp(string str1,string str2)
//{
//	// checking for larger 
//	if(str1.length() > str2.length())
//	{
//		return true;
//	}
//	else if(str1.length() < str2.length())
//	{
//		return false;
//	}
//	else if(str1.length() == str2.length())
//	{
//		int i=0;
//		int j=str1.length()-1;
//		while(i<=j)
//		{
//			if(str1[i] > str2[i])
//			{
//				return true;
//			}
//			else if(str1[i] < str2[i])
//			{
//				return false;
//			}
//			else if(str1[i] == str2[i])
//			{
//				i++;
//			}
//		}
//	}
//}

bool comp(string str1,string str2)
{
	if(str1.length() == str2.length())
	{
		return str1>str2;
	}
	else
	{
		return str1.length() > str2.length();
	}
}

void insertionSort(string *str,int n)
{
	for(int i=0;i<n;i++)	
	{
		string temp = str[i];
		int j = i-1;
		
		while( j>=0 && comp(str[j],temp))  // str1 and str2
		{
			str[j+1] = str[j];
			j--;
		}
		str[j+1] = temp;
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
	
	insertionSort(str,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<str[i]<<endl;
	}
	
	return 0;
}
