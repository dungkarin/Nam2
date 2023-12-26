#include<bits/stdc++.h>
using namespace std;
class Dathuc{
int n;
float *a;
public:
void nhapdt(char ten,Dathuc *P)
{
	cout<<"nhap da thuc "<<ten<<"\n\tNhap bac cua da thuc:";
	cin>>P->n;
	//a=(float *) malloc(sizeof(float)*(n+1));
	P->a=new float[P->n+1];
	for(int i=0;i<=P->n;i++)
	{
		cout<<"nhap he so thu "<<i<<":";
		cin>>P->a[i];
	}
}
float tinhgt(Dathuc P, float d)
{
	float Pd=P.a[0];
	for(int i=1;i<=P.n;i++) Pd+=P.a[i]*pow(d,i);
	return Pd;
}
Dathuc tong(Dathuc P,Dathuc Q)
	{ Dathuc R;int j;
		R.n=(Q.n>P.n)?Q.n:P.n;j=(Q.n<P.n)?Q.n:P.n;
		R.a=new float[R.n+1];
		for(int i=0;i<=j;i++)
			R.a[i]=P.a[i]+Q.a[i];
		for(int i=j+1;i<=R.n;i++)
			if(R.n==Q.n) R.a[i]=Q.a[i];else R.a[i]=P.a[i];
		return R;
	}
friend int main();
};
int main()
{
	Dathuc P,Q;
	float d,Pd,Qd;
	P.nhapdt('P',&P);
	Q.nhapdt('Q',&Q);
	cout<<"nhap so thuc d:";cin>>d;
	//P(d)=a0+a1d+a2d^2+...+and^n
	Pd=P.tinhgt(P,d);
	Qd=Q.tinhgt(Q,d);
	cout<<"\nP-Q="<<Pd-Qd;
	cout<<"\nP+Q: ";
	Dathuc R=P.tong(P,Q);
	for(int i=0;i<=R.n;i++)
	cout<<R.a[i]<<"\t";
}
