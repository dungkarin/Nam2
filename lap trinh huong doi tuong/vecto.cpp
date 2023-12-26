#include<bits/stdc++.h>
using namespace std;
class Vecto {
	int n;
	double *a;
	public:
		friend istream&operator>>(istream &is, Vecto &x) {
			cout<<"Nhap so chieu:";is>>x.n;
			x.a=new double[x.n];
			for(int i=0;i<x.n;i++) {
				cout<<"Nhap toa do thu "<<i+1<<" :";is>>x.a[i];
			}
			return is;
		}
		void in() {
			cout<<"(";
			for(int i=0;i<n;i++) {
				cout<<a[i]<<",";
			}
			cout<<")\n";
		}
		double operator*(const Vecto &x) {
			double k=0;
			for(int i=0;i<n;i++) {
				k+=a[i]*x.a[i];
			}
			return k;
		}
		int getn() {
			return n;
		}
		friend Vecto nhan(Vecto &x,int k) {
			for(int i=0;i<x.n;i++) {
				x.a[i]=x.a[i]*k;
			}
			return x;
		}
};
int main() {
	Vecto u,v;
	cin>>u>>v;
	int m,n;
	cout<<"Nhap m va n:";cin>>m>>n;
	cout<<nhan(u,m)*nhan(v,n);
}
