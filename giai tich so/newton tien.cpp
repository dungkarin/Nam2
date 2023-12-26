#include<bits/stdc++.h>

using namespace std;
class newtontien
{
	double x0,x,h,y[100],t,S,k;
	int n;
	public:
		void nhap()
		{
			cout<<"Nhap n: ";cin>>n;
			cout<<"Nhap vao gia tri cua x, x0, h :\n";
			cout<<"x = ";cin>>x;
			cout<<"x0 = ";cin>>x0;
			cout<<"h = ";cin>>h;
			for(int i=0;i<=n;i++)
			{
				cout<<"y["<<i<<"] = ";cin>>y[i];
			}
		}
		void xuat()
		{
			t=(x-x0)/h;
			k=1;
			S=y[0];
			for(int i=1;i<=n;i++)
			{
				for(int j=0;j<=n-i;j++)
				{
					y[j]=y[j+1]-y[j];
				}
				k*=(t-i+1)/i;
				S+=k*y[0];
			}
			cout<<"Gia tri gan dung la : "<<S;
		}
};
int main()
{
	newtontien a;
	a.nhap();
	a.xuat();
}

