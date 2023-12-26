#include<bits/stdc++.h>
using namespace std;
class newton{
	int n;
	double x[100],y[100],a,P,z;
	public:
 		
void nhap(){
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0;i<=n;i++){
		cout<<"x["<<i<<"]=";
		cin>>x[i];
	}
	for(int i=0;i<=n;i++){
		cout<<"y["<<i<<"]=";
		cin>>y[i];
	}
	cout<<"Nhap x*: "; cin>>a;	
	}

void xuat(){
	P=y[0],z=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i;j++){
		y[j]=(y[j+1]-y[j])/(x[j+i+1]-x[j]);
	} 
		z*=(a-x[i]);  
		P+=z*y[0];
	}
	cout<<"Ket qua: "<<P;
	}
};

int main(){
	newton b;
	b.nhap();
	b.xuat();
	
}
