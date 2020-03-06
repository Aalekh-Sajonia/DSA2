#include<bits/stdc++.h>
using namespace std;

class heap 
{
	int capacity;
	vector<pair<int,int>> harr;
	int hIndex;
	public:
		heap(int cap)
		{
			capacity = cap;
			hIndex = 0;
		}
		
		int parent(int i)
		{
			return (i-1)/2;
		}
		int left(int i)
		{
			return (2*i + 1);
		}
		int right(int i)
		{
			return (2*i + 2);
		}
		
		pair<int,int> extractMax();
		void insert(pair<int,int>);
		void print();
		void maxHeapify(int);
};

void heap :: maxHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int greatest = i;
	if(l<hIndex)
	{
		if(harr[l].second == harr[i].second)
		{
			if(harr[l].first > harr[i].first)
			{
				greatest = l;
			}
		}
		else if(harr[l].second > harr[i].second)
		{
			greatest = l;
		}
	}
	if(r<hIndex)
	{
		if(harr[r].second == harr[greatest].second)
		{
			if(harr[r].first > harr[greatest].first)
			{
				greatest = r;
			}
		}
		else if(harr[r].second > harr[greatest].second)
		{
			greatest = r;
		}
	}
	if(greatest!=i)
	{
		swap(harr[i],harr[greatest]);
		maxHeapify(greatest);
	}
}

pair<int,int> heap :: extractMax()
{
	if(hIndex == 1)
	{
		hIndex--;
		pair<int,int> temp;
		temp = harr[0];
		harr.pop_back();
		return temp;
	}
	
	pair<int,int> root = harr[0];
	harr[0] = harr[hIndex-1];
	hIndex--;
	harr.pop_back();
	maxHeapify(0);
	return root;
}

void heap :: print()
{
	for(auto x: harr)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}

void heap :: insert(pair<int,int> p)
{
	hIndex++;
	int i = hIndex-1;
	harr.push_back(p);
	
	while(i!=0)
	{
		//cout<<"here";
		if(harr[parent(i)].second == harr[i].second) //frequence barabar he
		{
			if(harr[i].first > harr[parent(i)].first)
			{
				swap(harr[parent(i)],harr[i]);
			}
		}
		else if(harr[parent(i)].second < harr[i].second) //agar barabar in heto me frequence ke uppar sort karungd
		{
			swap(harr[parent(i)],harr[i]);
		}
		i = parent(i);
	}
}

void kEle(int *arr,int n,int k)
{
	unordered_map<int,int> myMap;
	for(int i=0;i<n;i++)
	{
		myMap[arr[i]]++;
	}
	
	heap myHeap(myMap.size());
	//cout<<"here";
	for(auto x:myMap)
	{
		myHeap.insert(x);
	}
//	myHeap.print();
	for(int i=0;i<k;i++)
	{
		pair<int,int> temp = myHeap.extractMax();
		cout<<temp.first<<" "<<temp.second<<endl;		
	}

}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	kEle(arr,n,k);	
	return 0;
}
