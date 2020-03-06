#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll setBits(ll n) 
{ 
  	ll count = 0; 
    while (n) 
	{ 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

int main()
{

    ll a,b;

    cin>>a>>b;

    for(ll i=1;i<32 ;i++)
    {
        ll x=a-(i*b);
        if(x<=0 || x<i)
        {
            cout<<"-1";
            return 0;
        }
        if(setBits(x)<=i)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
