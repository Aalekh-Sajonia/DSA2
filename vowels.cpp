#include<bits/stdc++.h>
using namespace std;

bool isVowel(char x) 
{ 
    return (x == 'a' || x == 'e' || x == 'i' || 
                        x == 'o' || x == 'u'); 
} 

int findMin(string str,int n)
{
	set<char> hash;
	
	int start=0;
	int min = INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		int minHere = 0;
		if(isVowel(str[i])==true)
		{
			hash.insert(str[i]);
			for(int j=i+1;j<n;j++)
			{
		
				if(isVowel(str[j]))
				{
					hash.insert(str[j]);
					if(hash.size()==5)
					{
					//	cout<<"herer";
						minHere = abs(j-i)+1;
						if(minHere<min)
						{
							min = minHere;
						}
						hash.clear();
						break;
					}
				}
			}
		}
		
	}
	if(min==INT_MAX)
		return -1;
	else
		return min;
}

int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	cout<<findMin(str,n);
	return 0;
}
