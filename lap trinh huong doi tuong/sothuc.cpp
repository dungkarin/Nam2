#include<bits/stdc++.h>
using namespace std;

void nhap(int n, double a[])
{
	cout<<"Nhap so phan tu cua day:"; cin>>n;
	for(int i;i<n;i++)
	{
		cout<<"\nPhan tu thu "<<i+1<<": "; cin>>a[i];
	}
}

void xuat(int n, double a[])
{
	cout<<"\nDay vua nhap la: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}



int main()
{
	int n;
	double a[n+5];
	nhap(n,a);
	xuat(n,a);


}


