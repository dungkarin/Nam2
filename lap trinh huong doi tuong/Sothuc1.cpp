#include<bits/stdc++.h>
using namespace std;
struct DayThuc{
	int n;
	float *a;
};
istream &operator>>(istream &is,DayThuc &x){
	cout<<"Nhap so phan tu n cua day: ";is>>x.n;
	x.a=new float[x.n];
	for(int i=0;i<x.n;i++){
		cout<<"Nhap phan tu thu "<<i+1<<" :";
		is>>x.a[i];
	}
	return is;
}
ostream &operator<<(ostream &os,DayThuc x){
	os<<"Day so vua nhap:\n";
	for(int i=0;i<x.n;i++){
		os<<setw(3)<<left<<x.a[i];
	}
	return os;
}
void max(int n,DayThuc x){
	int d;
	if(x.n==3)
	{
		cout<<"\nBo 3 so co tong lon nhat la:\n";
		for(int i=0;i<x.n;i++)
		{
			cout<<x.a[i]<<" ";
		}
	}
	if(x.n<3)
	{
		cout<<"\nKhong co bo 3 so!!!\n";
	}
	if(x.n>3)
	{
		float max=x.a[0]+x.a[1]+x.a[2];
	for(int i=1;i<x.n-2;i++){
		float sum=x.a[i]+x.a[i+1]+x.a[i+2];
		if(max<sum)
		d=i;
	}
	cout<<"\nBo 3 so co tong lon nhat la:\n";
	cout<<x.a[d]<<" "<<x.a[d+1]<<" "<<x.a[d+2];
	}
}
int main() 
{
	int n;
	DayThuc x;
	cin>>x;
	cout<<x;
	max(n,x);
}
