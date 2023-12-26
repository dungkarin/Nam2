#include<bits/stdc++.h>
using namespace std;

class Parabol{
	int n;
	double a,b;
	public:
	
		void nhap(){
			cout<<"Nhap n, a, b :";
			cin>>n>>a>>b;
		}
	
		float f(float k){
			return 	pow(k,k);
		}
	
		void xuat(){
			double h=(b-a)/(2*n);
			double I=f(a)+f(b);
			for(int i=1;i<2*n;i++)
			{
				float x=a+i*h;
				i%2==0 ? I+=2*f(x) : I+=4*f(x);
			}
			cout<<"I="<<I*h/3;
		}
};

int main(){
	Parabol p;
	p.nhap();
	p.xuat();
}

