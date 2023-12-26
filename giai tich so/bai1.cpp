#include<bits/stdc++.h>
using namespace std;

// Nguyen Cong Tuan Dung-201200056
// Ma de: 07

class DayCung{
	double a,b,ss;
	public:
	
	void nhap(){
		cout<<"Nhap khoang nghiem a, b: ";
    	cin>>a>>b;
    	cout<<"\nNhap ss: ";
    	cin>>ss;
	}
	
	float f(double x){
   		return (x*x*x)-(0.2*x*x)-(0.2*x)-1.2;
	}
	
	void xuat(){
		double x;
			cout<<"\n  a\t\tb\t    x\t\t |x1-x0|\n";
    		if (f(a)>0){
    			x=b;
        	do {
           		b=x;
            	x=b-((a-b)*f(b)/(f(a)-f(b)));
            cout<<"\n"<<a<<"\t\t"<<b<<"\t"<<x<<"\t\t"<<fabs(x-b);
       		}
       		while (fabs(x-b) > ss);
   			}
   			else{
   				x=a;
       		do{
        		a=x;
            	x=a-((b-a)*f(a)/(f(b)-f(a)));
           	cout<<"\n"<<a<<"\t\t"<<b<<"\t"<<x<<"\t\t"<<fabs(x-a);
       		}
      		while (fabs(x-a) > ss);
    		}
   			cout<<"\n\nNghiem cua phuong trinh x = "<<x;
	}
	
};

 
int main()
{   
     DayCung x;
     x.nhap();
     x.xuat();    
}



