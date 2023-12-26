#include<bits/stdc++.h>
using namespace std;
class doibong{
	int n;
	int tenclb;
	int sove,ngay;
	int k,tong=0;
	double *a;
	public:
		friend istream&operator>>(istream &is,doibong &x){
			cout<<"Nhap so clb: ";	is>>x.n;
			x.a=new double[x.n+5];
			for(int i=0;i<x.n;i++){
				cout<<"Nhap ten clb: 1.MU	2.PSG	3.RM	4.AcM	5.Bar	6.Munich ";is>>x.tenclb;
				cout<<"Nhap so ve: ";is>>x.sove;
				cout<<"Ngay giao luu: ";is>>x.ngay; 
			}
			return is;
		}
		friend ostream&operator<<(ostream &os, doibong x){
			os<<"Thong tin clb: ";
			for(int i=0;i<x.n;i++){
				os<<"Ten clb: "<<x.tenclb<<"\t"<<"So ve: "<<x.sove<<"\t"<<"Ngay giao luu: "<<x.ngay<<"\n";	
			}
			return os;
		}
		int getten(){
			return tenclb;
		}
		friend int tinhdoanhthu(){
			if(getten(tenclb)==1)
			x.k=120*x.sove;
			if(x.tenclb==2)
			x.k=80*x.sove;
			if(x.tenclb==3)
			x.k=85*x.sove;
			if(x.tenclb==4)
			x.k=90*sove;
			if(x.tenclb==5)
			x.k=100*x.sove;
			if(x.tenclb==6)
			x.k=110*x.sove;
			return x.k;
		}
		friend int tong(){
			x.tong+=x.k*x.ngay;
			return x.tong;
		}
};

int main()
{
	doibong A;
	cin>>A;
	


}


