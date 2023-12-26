#include<bits/stdc++.h>
using namespace std;


void *cp(int n,int i)			 
{
	int *a=new int[n];
	for(int i=0;i*i<=n;i++) a[i]=i*i;
	return a;
}


int main()
{
	int k,*x=cp(1001,k);
	for(int i=0;i<k;i++)  cout<<x[i]<<" ";
	delete []x;
}


