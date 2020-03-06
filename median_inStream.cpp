#include<bits/stdc++.h>
using namespace std;

class Heap
{
	public:
	vector<int> UhArr;
	int UhIndex;
	vector<int> LhArr;
	int LhIndex;
	
		Heap()
		{
			UhIndex = 0;
			LhIndex = 0;
		}
		int parent(int i)
		{
			return (i-1)/2;
		}
		int left(int i)
		{
			return (2*i+1);
		}
		int right(int i)
		{
			return (2*i+2);
		}
		
		void Uinsert(int val);
		int Umax();
		int UextMax();
		
		void UHeapify(int i);
		
		void Uprint();
		
		void Linsert(int val);
		int Lmin();
		int LextMin();
		
		void LHeapify(int i);
		
		void Lprint();
};

int Heap::Umax()
{
	return UhArr[0];
}
int Heap::Lmin()
{
	return LhArr[0];
}

void Heap::Uprint()
{
	for(int i=0;i<UhIndex;i++)
	{
		cout<<UhArr[i]<<" ";
	}
}

void Heap :: Uinsert(int val)
{
	UhIndex++;
	int i = UhIndex - 1;
	UhArr.push_back(val);
	
	while(i!=0 && UhArr[parent(i)] < UhArr[i])
	{
		swap(UhArr[parent(i)],UhArr[i]);
		i = parent(i);
	}
}

int Heap::UextMax()
{
	if(UhIndex==1)
	{
		UhIndex--;
		int temp = UhArr[0];
		UhArr.pop_back();
		return temp;
	}
	
	int root = UhArr[0];
	UhArr[0] = UhArr[UhArr.size()-1];
	UhIndex--;
	UhArr.pop_back();
	UHeapify(0);
	return root;
}

void Heap::UHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int max = i;
	if(l<UhIndex && UhArr[l] > UhArr[i])
	{
		max = l;
	}
	if(r<UhIndex && UhArr[r] > UhArr[max])
	{
		max = r;
	}
	if(max!=i)
	{
		swap(UhArr[max],UhArr[i]);
		UHeapify(max);
	}
}




void Heap::Lprint()
{
	for(int i=0;i<LhIndex;i++)
	{
		cout<<LhArr[i]<<" ";
	}
}

void Heap :: Linsert(int val)
{
	LhIndex++;
	int i = LhIndex - 1;
	LhArr.push_back(val);
	
	while(i!=0 && LhArr[parent(i)] > LhArr[i])
	{
		swap(LhArr[parent(i)],LhArr[i]);
		i = parent(i);
	}
}

int Heap::LextMin()
{
	if(LhIndex==1)
	{
		LhIndex--;
		int temp = LhArr[0];
		LhArr.pop_back();
		return temp;
	}
	
	int root = LhArr[0];
	LhArr[0] = LhArr[LhArr.size()-1];
	LhIndex--;
	LhArr.pop_back();
	LHeapify(0);
	return root;
}



void Heap::LHeapify(int i)
{
	int l = left(i);
	int r = right(i);
	int min = i;
	if(l<LhIndex && LhArr[l] < LhArr[i])
	{
		min = l;
	}
	if(r<LhIndex && LhArr[r] < LhArr[min])
	{
		min = r;
	}
	if(min!=i)
	{
		swap(LhArr[min],LhArr[i]);
		LHeapify(min);
	}
}

int main()
{
	int t=10;
	Heap Uheap;
	Heap Lheap;
	while(t--)
	{
		int a;
		cin>>a;
		if(Uheap.UhIndex==0 && Lheap.LhIndex==0)
		{
			Uheap.Uinsert(a);
		}
		else if((Uheap.UhIndex + Lheap.LhIndex) == 1)
		{
			Lheap.Linsert(a);
		}
		else if(Uheap.Umax()>a)
		{
			Uheap.Uinsert(a);
		}
		else if(Lheap.Lmin()<a)
		{
			Lheap.Linsert(a);
		}
		
		if(abs(Uheap.UhIndex - Lheap.LhIndex)>=2)
		{
			if(Uheap.UhIndex > Lheap.LhIndex)
			{
				int temp = Uheap.UextMax();
				Lheap.Linsert(temp);
			}
			else
			{
				int temp = Lheap.LextMin();
				Uheap.Uinsert(temp);
			}
		}
		if(Uheap.UhIndex == Lheap.LhIndex)
		{
			cout<<(float)((float)Uheap.Umax() + (float)Lheap.Lmin())/(float)2;
		}
		else
		{
			if(Uheap.UhIndex > Lheap.LhIndex)
			{
				cout<<Uheap.Umax();
			}
			else
			{
				cout<<Lheap.Lmin();
			}
		}
		cout<<endl;	
	}
	return 0;
}
