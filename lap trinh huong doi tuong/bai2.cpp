#include<bits/stdc++.h>
using namespace std;
class DayNguyen{
	int n;
	float *a;
	public:
friend istream &operator>>(istream &is,DayNguyen &x){
	cout<<"\nNhap so phan tu n cua day: ";is>>x.n;
	x.a=new float[x.n];
	for(int i=0;i<x.n;i++){
		cout<<"Nhap phan tu thu "<<i+1<<" :";
		is>>x.a[i];
	}
	return is;
}
friend ostream &operator<<(ostream &os,DayNguyen x){
	os<<"Day so vua nhap:";
	for(int i=0;i<x.n;i++){
		os<<setw(5)<<left<<x.a[i];
	}
	return os;
}
float TongDay(){
	float sum=0;
	float tbc;
	DayNguyen x;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	tbc=sum/n;
	return tbc;
}
float Max(){
	float max=0;
	DayNguyen x;
	for(int i=0;i<n;i++){
		if(max<a[i])
		{
			max=a[i];
		}
	}
	return max;
	
}
	
};

int main()
{
	int n;
	float g;
	DayNguyen a;
	cin>>a;
	cout<<a;
	DayNguyen b;
	cin>>b;
	cout<<b;
	g=a.Max()/b.Max();
	cout<<"\nMaxA= "<<a.Max()<<"\nMaxB= "<<b.Max();
	cout<<"\nMaxA/MaxB= "<<g<<"\n";
	if(a.TongDay()>b.TongDay()){
		cout<<"TBC day A>TBC day B";
	}
	else if(a.TongDay()<b.TongDay()){
	cout<<"TBC day B>TBC day A";
	}
	else cout<<"TBC day A=TBC day B";


}


