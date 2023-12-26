#include<bits/stdc++.h>
using namespace std;

void nhap(int &n,float &xn,float &h,float &xx,float *y)
{
    printf("\nNhap so moc noi suy n = ");
    scanf("%d",&n);
    printf("\nNhap gia tri xn = ");
    scanf("%f",&xn);
    printf("\nNhap khoang cach giua hai moc cach deu h = ");
    scanf("%f",&h);
    printf("\nNhap gia tri can noi suy x*  = ");
    scanf("%f",&xx);
    for(int i=0;i<=n;++i)
    {
        printf("y[%d] = ",i);
        scanf("%f",&y[i]);
    }
}
float NewtonLui(float xx,float h,float xn,float *y,int n)
{
    float t,N,k;
    t=(xx-xn)/h;
    k=1;
    N=y[n];
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<=n-j;i++) 
		y[i]=y[i+1]-y[i];
        k*=(t-1+j)/j;
        N+=k*y[n-1];
    }
    return N;
}
int main()
{
    int n,i,j;
    float xx,x0,h,N,k,t,y[100];
    nhap(n,x0,h,xx,y);
    N = NewtonLui(xx,h,x0,y,n);
    printf("\nGia tri f(%.2f) =  %f",xx,N);
    return 1;
}


