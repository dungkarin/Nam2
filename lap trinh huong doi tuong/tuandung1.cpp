#include<bits/stdc++.h>
using namespace std;
class Dathuc {
	int n;
	double *a;
	public:
		void operator*() {
			cout<<"Nhap bac da thuc:";cin>>n;
			a=new double[n+1];
			for(int i=0;i<=n;i++) {
				cout<<"a["<<i<<"]=";
				cin>>a[i];
			}
		}
		void xuat() {
			cout<<"P(x)="<<a[0]<<"*";
			for(int i=1;i<n;i++) {
				cout<<a[i]<<"x^"<<i<<"*";
			}
			cout<<a[n]<<"x^"<<n<<"\n";
		}
		friend void giatri(Dathuc P,double d) {
			double t=0;
			for(int i=0;i<=P.n;i++) {
				t=t+P.a[i]*pow(d,i);
			}
			cout<<"Gia tri cua da thuc tai x="<<d<<" la:"<<t;
		}
		friend Dathuc biendoi(Dathuc P) {
			Dathuc Q;
			Q.n=P.n+2;
			Q.a=new double[Q.n];
			Q.a[0]=2021;
			for(int i=0;i<=P.n;i++) {
				Q.a[i+1]=P.a[i];
			}
			return Q;
		}
};
int main() {
	Dathuc P;
	*P;
	P.xuat();
	double d;
	cout<<"Nhap gia tri d:";
	cin>>d;
	Dathuc Q=biendoi(P);
	giatri(Q,d);
}

