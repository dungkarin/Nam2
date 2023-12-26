#include"bits/stdc++.h"
using namespace std;
class Laptop{
	public:
	string model;
	string hang;
	double gia;
	int baohanh;
	string hedieuhanh;
	friend istream &operator>>(istream &is, Laptop &A){
		cout<<"Model:";is>>A.model;
		cout<<"Hang:";is>>A.hang;
		cout<<"Gia:";is>>A.gia;
		cout<<"Baohanh:";is>>A.baohanh;
		cout<<"He dieu hanh:";is>>A.hedieuhanh;
		return is;
	}
	friend ostream &operator<<(ostream &os, Laptop A){
	os<<"Model:"<<setw(10)<<A.model;
	os<<"Hang:"<<setw(10)<<A.hang;
	os<<"Gia:"<<setw(10)<<A.gia;
	os<<"Baohanh:"<<setw(10)<<A.baohanh;
	os<<"He dieu hanh:"<<setw(10)<<A.hedieuhanh;
	return os;
	
	}
	
};
class laptop{
	int n;
	Laptop *A;
	public:
 friend istream &operator>>(istream &is , laptop &P){
 	cout<<"Nhap so luong may tinh:";is>>P.n;
 	P.A=new Laptop[P.n+2];
 	for(int i=0;i<P.n;i++){
 		cout<<"may tinh thu " <<i+1<<"la:";
 		is>>P.A[i];
}
	 return is;
 }
 friend ostream &operator<<(ostream &os , laptop P){
 	for(int i=0;i<P.n;i++){
 	os<<"may tinh thu"<<i+1<<"la:";
 	os<<P.A[i];	 }
 	return os;
 }
 void Gia(){
 	for(int i=0;i<n;i++){
 	for(int j=i+1;j<n;j++){
 		if(A[i].gia>A[j].gia){
 			swap(A[i],A[j]);
		 }
	 }
	 }
 }
};

int main()
{
laptop S;
cin>>S;
cout<<S<<endl;
S.Gia();
cout<<"gia tang dan la:";
cout<<S;
return 0;
}

