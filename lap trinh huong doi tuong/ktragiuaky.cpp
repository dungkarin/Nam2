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
			cout<<"Nhap so clb: ";is>>x.n;
			x.a=new double[x.n];
			for(int i=0;i<x.n;i++){
				cout<<"Nhap ten clb: 1.MU	2.PSG	3.RM	4.AcM	5.Bar	6.Munich ";is>>tenclb;
				cout<<"Nhap so ve: ";is>>sove;
				cout<<"Ngay giao luu: "is>>ngay; 
			}
			return is;
		}
		friend ostream&operator<<(ostream &os, doibong x){
			os<<"Thong tin clb: ";
			for(int i=0;i<x.n;i++){
				os<<"Ten clb: "<<tenclb<<"\t"<<"So ve: "<<sove<<"\t"<<"Ngay giao luu: "<<ngay<<"\n";	
			}
			return os;
		}
		friend int tinhdoanhthu(){
			if(tenclb==1)
			k=120*sove;
			if(tenclb==2)
			k=80*sove;
			if(tenclb==3)
			k=85*sove;
			if(tenclb==4)
			k=90*sove;
			if(tenclb==5)
			k=100*sove;
			if(tenclb==6)
			k=110*sove;
			return k;
		}
		friend int tong(){
			tong=k*ngay;
			return tong;
		}
};

int main()
{
	doibong A;
	cin>>A;
	


}


