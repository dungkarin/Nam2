#include<bits/stdc++.h>
using namespace std;
class DayThuc{
	int n;
	float *a;
	public:
friend istream &operator>>(istream &is,DayThuc &x){
	cout<<"Nhap so phan tu n cua day: ";is>>x.n;
	x.a=new float[x.n];
	for(int i=0;i<x.n;i++){
		cout<<"Nhap phan tu thu "<<i+1<<" :";
		is>>x.a[i];
	}
	return is;
}
friend ostream &operator<<(ostream &os,DayThuc x){
	os<<"Day so vua nhap:\n";
	for(int i=0;i<x.n;i++){
		os<<setw(3)<<left<<x.a[i];
	}
	return os;
}
float TongDay(){
	float sum=0;
	DayThuc x;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}

};
int main() 
{
	int n;
	float k,g;
	DayThuc x;
	cin>>x;
	cout<<x;
	k=x.TongDay();
	cout<<"\nTong S cua day vua nhap la: "<<k;
	g=1/k;
	cout<<"\nKet qua 1/S la: "<<g;
	
}
