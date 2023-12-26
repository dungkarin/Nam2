#include<bits/stdc++.h>
using namespace std;
double D=0,k=1;
int main()
{
    
    int n,i;
	double xn,h,x,y[100]={};
	cout<<"Nhap n,xn,h,x:\n";
    cin>>n>>xn>>h>>x;
    double t=(x-xn)/h;
    cout<<"Nhap y\n";
    for(int i=0;i<=n;i++) {
	cout<<"y["<<i<<"]=";
	cin>>y[i];
	}
    D=y[n];
    for(int i=1;i<=n;i++)
    {
    	for(int j=0;j<=n-i;j++) y[j]=y[j+1]-y[j];
    	k*=(t+i-1)/i;
    	D+=y[n-i]*k;
	}
	cout<<"f("<<x<<")="<<D;
}

