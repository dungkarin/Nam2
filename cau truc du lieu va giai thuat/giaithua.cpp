#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n;
	list<int> L(1,1);
	while(n>1)
	{
		long long nho=0;
		for(auto it=L.rbegin();it!=L.rend();it++)
		{
			nho+=*it*n;
			*it=nho%10;
			nho/=10;
		}
		while(nho) {L.push_front(nho%10); nho/=10;}
		while(L.back()==0) {d++;L.pop_back();}
		n--;
		for(auto x:L) cout<<x;
		cout<<string(d,'0');
	}


}


