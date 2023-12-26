#include<bits/stdc++.h>
using namespace std;

class ChiaDoi{
	double a,b,ss;
	public:

	void nhap(){
		cout<<"Nhap ss,a,b: ";
		cin>>ss>>a>>b;
	}
	
	double f(double a){
		return pow(a,5)-a-1/5.0;
	}

	void xuat(){
		double c;
		while(b-a>ss){
			c=(a+b)/2;
			if(f(c)==0){
				cout<<c;
				return;
			} 
			else if(f(a)*f(c)<0) b=c;
			else a=c;
		}
		c=(a+b)/2;
		cout<<"Ket qua gan dung = "<<c;
	}
};

int main(){
	ChiaDoi a;
	a.nhap();
	a.xuat();
}

