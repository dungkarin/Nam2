#include<bits/stdc++.h>
#include<list.h>
using namespace std;
int main()
{
	list<int> L(6,2);
	cout<<"\nList : "; for(list<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	L.push_front(5);
	L.back()=7;
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	auto it=L.begin();it++;it++;
	*it=4;
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	L.pop_front();
	L.front()=1;
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	cout<<"\nList DAO : ";
	for(list<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" ";
	it++;
	int a[]={13,15,11,15};
	L.insert(it,a,a+4);
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	L.sort
	
}


