#include<bits/stdc++.h>
using namespace std;
class qlkh{
	int n;
	string mk,tk,sdt,tdu;
	double sl;
	public:
		friend istream &operator>>(istream &is, qlkh &x){
	cout<<"Nhap so khach hang: ";is>>x.n;
	
	for(int i=0;i<x.n;i++){
		cout<<"Khach hang thu "<<i+1<<" :\n";
		cout<<"Ma khach hang: ";fflush(stdin);getline(is,x.mk);
		cout<<"Ten khach hang: ";fflush(stdin);getline(is,x.tk);
		cout<<"So dien thoai khach hang: ";fflush(stdin);getline(is,x.sdt);
		cout<<"Ten do uong: ";fflush(stdin);getline(is,x.tdu);
	}
	return is;
}
		friend ostream &operator<<(ostream &os, qlkh x){
			os<<"Danh sach khach hang: \n";
			for(int i=0;i<x.n;i++){
				os<<"|"<<x.mk<<"|"<<x.tk<<"|"<<x.sdt<<"|"<<x.tdu<<"|\n";
		}
	return os;
	}
};

int main()
{
	qlkh x;
	cin>>x;
	cout<<x;
}


