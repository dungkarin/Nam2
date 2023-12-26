#include<bits/stdc++.h>
using namespace std;

// Nguyen Cong Tuan Dung-201200056
// Ma de: 07

class HinhThang{
	int n;
	double a,b;
	public:
		void nhap(){
			cout<<"Nhap n, a, b :"<<endl;
			cin>>n>>a>>b;
		}
		float f(float x)
		{   
			float y=x*x*x;
    		float d = y*3.14/180;
			float t=(sin(d))/(x*x);
			return t;
		}
		void xuat(){
			double h=(b-a)/n;
			double l=f(a)+f(b);
			for(int i=1 ; i<n ; i++){
				double x=a+i*h;
				l+=2*f(x);
			}
			cout<<l*h/2;
		}
};

int main()
{
	HinhThang p;
	p.nhap();
	p.xuat();
}

