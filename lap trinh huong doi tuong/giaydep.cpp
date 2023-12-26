#include<bits/stdc++.h>
using namespace std;
struct Giay{
	int ma;
	int loai;
	string xuatsu;
	int gia;
};
istream &operator>>(istream &is,Giay &a){
	cout<<"Nhap ma hang: ";is>>a.ma;
	cout<<"Nhap loai giay:\n1.giay bet.\n2.giay 3cm.\n3.giay 5-7cm.\n4.giay >=9cm.\n";is>>a.loai;
	cout<<"Nhap xuat su: ";fflush(stdin);getline(is,a.xuatsu);
	cout<<"Nhap gia: ";is>>a.gia;
	return is;
}
ostream &operator<<(ostream &os,Giay a){
	cout<<setw(8)<<left<<a.ma<<"|"<<setw(8)<<left<<a.loai<<"|";
	cout<<setw(8)<<left<<a.xuatsu<<"|"<<setw(8)<<left<<a.xuatsu;
	cout<<"|"<<setw(8)<<left<<a.gia<<endl;
	return os;
}
void sapxep(Giay *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].loai<a[j].loai)
			swap(a[i],a[j]);
		}
	}
}
int main() {
	int n;
	cout<<"Nhap so luong giay:";cin>>n;
	Giay *a;
	a=new Giay[n];
	for(int i=0;i<n;i++){
		cout<<"Giay thu "<<i+1<<" :\n";
		cin>>a[i];
	}
	sapxep(a,n);
	cout<<"Danh sach giay sau khi sap xep:\n";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
