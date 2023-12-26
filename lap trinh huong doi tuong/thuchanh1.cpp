#include<bits/stdc++.h>
using namespace std;
class diem{
	float x,y;
	public:
		void nhap(){
			cout<<"Nhap hoanh do: ";cin>>x;
			cout<<"Nhap tung do: ";cin>>y;
		}
		void xuat(){
			cout<<"("<<setprecision(1)<<fixed<<x<<","<<setprecision(1)<<fixed<<y<<")"<<endl;
		}
		float getx(){
			return x;
		}
		float gety(){
			return y;
		}
		friend float kc(diem,diem);
		friend class daydiem;
};
float kc(diem a,diem b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
class daydiem{
	int n;
	diem *d;
	public:
		void nhap(){
			cout<<"Nhap so diem: ";cin>>n;
			d=new diem[n+1];
			for(int i=0;i<n;i++){
				cout<<"Diem thu "<<i+1<<endl;
				d[i].nhap();
			}
		}
		void xuat(){
			cout<<"Day diem:\n";
			for(int i=0;i<n;i++){
				d[i].xuat();
			}
		}
		float tongkcO(){
			float sum=0;
			diem z;
			z.x=z.y=0;
			for(int i=0;i<n;i++){
				sum+=kc(d[i],z);
			}
			return sum;
		}
		int demtrongR(float R){
			int dem=0;
			diem z;
			z.x=z.y=0;
			for(int i=0;i<n;i++){
				if(kc(d[i],z)<R)
				dem++;
			}
			return dem;
		}
};
int main() {
	daydiem a;
	a.nhap();
	a.xuat();
	float x,R;
	int y;
	x=a.tongkcO();
	cout<<"Tong khoang cach cua cac diem den goc toa do la: "<<setprecision(1)<<fixed<<x<<endl;
	cout<<"Nhap ban kinh R: ";cin>>R;
	y=a.demtrongR(R);
	cout<<"So diem nam trong ban kinh R la: "<<y;
}

