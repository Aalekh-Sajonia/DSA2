#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
int main()
{
	const  ld  PI = 3.14159265358979323846 ; 
	ld a,b,x;
	cin>>a>>b>>x;
	ld s = x/a;
	ld ans;
	ld a1;
	
	if(s == a*b)
	{
		ans = 0;
	}
	else
	{
		if(s > b*a/2)
		{
			ld b1 = 2*s/a - b;
			s -= a * b1;
			b -= b1;
			a1 = 2*s/b;
		}
		else
		{
			a1 = 2*s/b;
		}
		ld radian = atan(b/a1);
		ans = radian * (180.0 / PI);
	}
	cout<<fixed<< setprecision(10)<<ans;
	cout<<endl;
	return 0;
}
