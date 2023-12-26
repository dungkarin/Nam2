#include<bits/stdc++.h>
using namespace std;
class Toado{
	protected: double x,y;
		
	public:
		toado(double x=0,double y=0,int mau=0)
		{
			this->x=x;
			this->y=y;
			this->mau=mau;
		}
		void nhap(){
			cout<<"nhap hoanh do : ",cin>>x;
			cout<<"nhap tung do : ",cin>>y;
			
		}
		void xuat(){
			cout<<"("<<x<<","<<y<<")";
		}
};
class Diemmau: public Toado{
	int mau;
	public:
		void nhap(){
			Toado::nhap();
			cout<<"nhap mau sac(1-do;2-xanh;3-vang) : ",cin>>mau;
		}
		void xuat(){
			Toado::xuat();
			cout<<"-"<<mau;
		}
};
class Daydiem{
	int n;
	Diemmau *a;
	public:
		void nhap(){
			cout<<"nhap so diem: ";cin>>n;
			a=new Diemmau[n+5];
			for(int i=0;i<n;i++){
				cout<<"nhap toa do diem thu "<<i+1<<": "<<endl;
				a[i].nhap();	 
			}
		}
		void xuat(){
			for(int i=0;i<n;i++){
				a[i].xuat();cout<<endl;
			}
		}
		void xa_nhat(){
			double kc=sqrt(pow(x,2)+pow(y,2));
			
		}
};
int main()
{



}


