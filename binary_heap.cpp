#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

class heap
{
	vector<ll> harr;
	ll capacity;
	ll hSize;
	
	public :
		heap()
		{
			capacity = 100000000;
			hSize = 0;
		}
		
//		void incCap()
//		{
//			capacity++;
//		}
		
		int parent(ll i)
		{
			return (i-1ll)/2ll;		
		}		
		
		int left(ll i)
		{
			return (2ll*i+1ll);
		}
		
		int right(ll i)
		{
			return (2ll*i+2ll);
		}
		
		int getMin()
		{
			return harr[0];
		}
		
		void insert(ll i);
		
		int extractMin();
		
		void heapify(ll i);
		void print();
};

void heap::print()
{
	for(ll i=0;i<hSize;i++)
	{
		cout<<harr[i]<<" ";
	}
}

void heap :: insert(ll i)
{
	if(hSize == capacity)
	{
		return ;
	}
	hSize++;
	ll j = hSize-1ll;
	harr.push_back(i);
	
	while(j !=0ll && harr[parent(j)] < harr[j])
	{
		swap(harr[parent(j)],harr[j]);
		j = parent(j);
	}
}

int heap::extractMin()
{
	if(hSize <= 0ll)
	{
		return INT_MAX;
	}
	if (hSize == 1ll)
	{
		hSize--; 
		return harr[0];
	}
	
	ll root = harr[0ll];
	harr[0ll] = harr[hSize-1ll];
	//harr.pop_back();
	hSize--;
	heapify(0ll);
	return root;
}

void heap::heapify(ll i)
{
	ll l = left(i);
	ll r = right(i);
	ll greatest=i;
	if(l<hSize && harr[l] > harr[i])
	{
		greatest = l;
	}
	if(r<hSize && harr[r] > harr[greatest])
	{
		greatest = r;
	}
	if(greatest!=i)
	{
		swap(harr[i],harr[greatest]);
		heapify(greatest);
	}
}
int main()
{
	ll n;
	cin>>n;
	heap *myHeap = new heap();
	for(ll i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		myHeap->insert(a);
	}
	ll t;
	cin>>t;
	while(t--)
	{
		ll b;
		cin>>b;
		if(b==1ll)
		{
			ll c;
			cin>>c;
			myHeap->insert(c);
			myHeap->print();
			cout<<endl;
		}
		else
		{
			cout<<myHeap->extractMin()<<endl;
			myHeap->print();
			cout<<endl;
		}
	}
	
//	myHeap->print();	
	return 0;
}

//
//#include<bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//int main()
//{
//	priority_queue <ll>myQ;
//	ll n;
//	cin>>n;
//	for(ll i=0;i<n;i++)
//	{
//		ll a;
//		cin>>a;
//		myQ.push(a);
//	}
//	ll t;
//	cin>>t;
//	while(t--)
//	{
//		ll a;
//		cin>>a;
//		if(a==1)
//		{
//			int b;
//			cin>>b;
//			myQ.push(b);
//		}
//		else
//		{
//			cout<<myQ.top()<<endl;
//			myQ.pop();
//		}
//	}
//	return 0;
//}


