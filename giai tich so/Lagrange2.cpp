#include<bits/stdc++.h>
using namespace std;

void nhap(double x[], double y[], int n)
{ 
	printf("Nhap cac bo moc noi suy: \n");
	for(int i=0;i<n;i++)
	{
		printf("Nhap bo moc noi suy thu %d:",i+1);
		scanf("%lf%lf",&x[i],&y[i]);
	}
}

void in(double x[], double y[], int n)
{
	printf("Cac bo moc noi suy vua nhap la: \n");
	for(int i=0;i<n;i++)  printf("(%.1lf,%.1lf)	  ",x[i],y[i]);
}

double lagrange(double x[], double y[], int n, double x0)
{
	double P=0,L;
	for(int i=0;i<n;i++)
	{
		L=1;
		for(int j=0;j<n;j++)
		{
			if(i!=j)	L*=(x0-x[j])/(x[i]-x[j]);
		}
			P+=L*y[i];
	}
	return P;
}


int main()
{
	int n;
	double x0,x[n+5],y[n+5];
	printf("So moc noi suy:\n");
	scanf("%d",&n);
	printf("Nhap x*: \n");
	scanf("%lf",&x0);
	nhap(x,y,n);
	in (x,y,n);
	printf("P(x*)= %.1lf",lagrange(x,y,n,x0));
}


