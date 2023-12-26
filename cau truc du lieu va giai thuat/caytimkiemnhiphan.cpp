//cay tim kiem nhi phan = binary tree search
//BTS = cay nhi phan ma (moi nut trai <= goc <= moi nut phai) va 2 cay con deu la BTS
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int elem;
	node *left,*right;
	node(int x) {elem=x;left=right=0;}
};


class tree
{
	private:
		list<int> L;
		list<int>::iterator curr;
		node *H=0;
		int n;
		void add(node *&H,int x)
		{
			if(!H) H=new node(x);
			else add(x<H->elem?H->left:H->right,x);
		}
		int Max(node *H) {return H->right?Max(H->right):H->elem;}
		int remove(node *&H,int x)
		{
			if(!H) return 0;
			if(H->elem==x) 
			{
				if(!H->left) H=H->right;
				else if(!H->right) H=H->left;
				else {H->elem=Max(H->left); remove(H->left,H->elem);}
				return 1;
			}
			return remove(x<H->elem?H->left:H->right,x);			
		}
		void inorder(node *H) {if(H) {inorder(H->left); L.push_back(H->elem); inorder(H->right);}}
		void in_order(node *H,string p="\n") 
		{
			if(!H) return; 
			in_order(H->left,p+"\t"); 
			cout<<p<<H->elem; 
			in_order(H->right,p+"\t");
		}
		node *find(node *H,int x)
		{
			if(!H || H->elem==x) return H;
			return find(x<H->elem?H->left:H->right,x);
		}
	public:
		typedef list<int>::iterator iterator;
		iterator begin(){L.clear(); inorder(H);return L.begin();}
		iterator end(){return L.end();}
		tree() {H=0;n=0;}
		int empty() {return n==0;}
		int size() {return n;}
		void push(int x)
		{
			n++;
			add(H,x);
		}
		void pop(int x) {n-=remove(H,x);}
		int top() {return H->elem;}
		void travel() {in_order(H);}
};

int main()
{
	tree T;
	for(int x:{43,2645,36,63,74,2,26,773,83,59,05,84,26,27,48,59,06,72,2738}) T.push(x);
	cout<<"\nCay : "; T.travel();
	cout<<"\nCac gia tri : "; 
	for(tree::iterator it=T.begin();it!=T.end();it++) cout<<*it<<" ";
	cout<<"\nCac gia tri : "; 
	T.push(100);
	T.pop(63);
	for(tree::iterator it=T.begin();it!=T.end();it++) cout<<*it<<" ";
}


