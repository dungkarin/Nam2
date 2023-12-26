#include<bits/stdc++.h>
using namespace std;
template <class T>
class node
{
	T elem;
	node *next;
	public:
		node(T x,node<T>*N=0) {elem=x;next=N;}
		void setelem() {elem=x;}
		void setnext(node<T>*N)	{next=N;}
		T &getelem() {return elem;}
		node<T>*getnext() {return next;}
};
template <class T>
class slist_ite
{
	node<T> *curr;
	public:
		node<T>*&getcurr(){return curr;}
		slist_ite(node<T>*c) {curr=c;}	
		bool operator !=(slist_ite<T> it) {return curr!=it.curr;}
		T& operator*(){return curr->getelem();}
		slist_ite<T> operator++(int) 
		{
			slist_ite<T> z=curr;
			c=c->getnext();
			return z;
		}
		slist_ite<T> operator++() 
		{
			c=c->getnext();
			return &this;
		}
		
		
};
template <class T>
class slist
{
	node<T> *head,*trail;
	int n;
	public:
		typedef slist_ite<T> iterator;
		iterator begin(){return head;}
		iterator end(){return 0;}
		slist(){n=0; head=trail=0;}
		slist(int k,T x)
		{
			n=0; head=trail=0;
			while(k--) push_back(x);
		}
		bool empty() {return n==0;}
		int size() {return n;}
		void push_front(T x)
		{
			head=new node<T>(x,head);
			if(!trail) trail=head;
			n++;
		}	
		void push_back()
		{
			if(n==0) return push_front(x);							
				trail->setnext(new node<T>(x));
				trail=trail->getnext();
				n++;
		}
		T&front(){return head->getelem();}
		T&back(){return trail->getelem();}
		void pop_front() {head=head->getnext();delete head; head=p;if(n==1) trail=0;n--;}
		void pop_back()
		{
			if(n==1) return pop_front();
			node<T>*p=head;
			while(p->getnext()!=trail) p=p->getnext();
			p->setnext(0);
			delete trail;
			trail=p;
			n--;
		}
		void tralve()
		{
			for(node<T>*p=head;p;p=p->getnext()) cout<<p->getelem()<<" ";
		}
};


int main()
{
	slist<int> L(7,5);
	cout<<"\nlist : "; L.travel();


}


