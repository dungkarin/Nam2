#include<bits/stdc++.h>
using namespace std;

void nhap(double x[], double y[], int n)
{
	printf("Nhap cac bo moc noi suy\n");
	for (int i=0;i<=n;i++)
		{
			printf("Nhap bo moc noi suy thu %d",i);
			scanf("%lf%lf",&x[i],&y[i]);
		}
}

void in(double x[], double y[], int n)
{
	printf("Cac bo moc noi suy la: ");
	for (int i=0;i<=n;i++) printf("(%.1lf,%.1lf)  ",x[i],y[i]);
}

double lagrange(double x[], double y[], int n, double x0)
{
	double P=0,L;
	for (int i=0;i<=n;i++)
	{
		L=1;
		for (int j=0;j<=n;j++)
			if (i!=j) L *= (x0-x[j])/(x[i]-x[j]);
		P += L*y[i];
	}
	return P;
}
int main()
{
	int n;
	double x0, x[50], y[50];
	printf("Nhap so moc noi suy n = ");
	scanf("%d",&n);
	printf("Nhap x* = "); scanf("%lf",&x0);
	nhap(x,y,n);
	in(x,y,n);
	printf("P(x*) = %.1lf",lagrange(x,y,n,x0));
}


