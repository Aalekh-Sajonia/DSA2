#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
bool isIdentical(Node *,Node *);

int main()
{
  int t;
  struct Node *child;
  cin>>t;
  while (t--)
  {
     map<int, Node*> m;
     int n;
     cin>>n;
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }

     map<int, Node*> mm;
     int nn;
  	cin>>nn;
     struct Node *roott = NULL;
     while (nn--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (mm.find(n1) == mm.end())
        {
           parent = new Node(n1);
           mm[n1] = parent;
           if (roott == NULL)
             roott = parent;
        }
        else
           parent = mm[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        mm[n2]  = child;
     }
  cout<<isIdentical(root,roott)<<endl;
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/

bool isIdentical(Node *r1, Node *r2)
{
	if(r1==NULL && r2 == NULL)
	{
		return true;
	}
	if(r1!=NULL && r2 != NULL)
	{
		
		if
		(
			r1->data == r2->data &&
			isIdentical(r1->left, r2->left) &&
			isIdentical(r1->right,r2->right)
		) 
		{
			return true;
		}
	}
	return false;
}
