#include<bits/stdc++.h>
using namespace std;
class Toado {
	protected:
		double x, y;
	public:
		void nhap() {
			cout << "Nhap x: "; cin >> x;
			cout << "Nhap y: "; cin >> y;
		}
		void xuat() {
			cout<<"\n("<<x<<", "<<y<<")";
		}
		double kc() {
			return sqrt(x*x+y*y);
		}
		double getx() {
			return x;
		}
		double gety() {
			return y;
		}
};
class Diemmau: public Toado {
	int mau;
	public:
		void nhap() {
			Toado::nhap();
			cout<<"Nhap mau: ";cin>>mau;
		}
		void xuat() {
			Toado::xuat();
			cout<<"\tMau: "<<mau<<endl;
		}
		int getmau() {
			return mau;
		}
};
double khoangcach(Diemmau a,Diemmau b) {
	return sqrt(pow(b.getx()-a.getx(),2)+pow(b.gety()-a.gety(),2));
}
class dsDiem {
		int n;
		Diemmau *a;
	public:
		void nhap() {
			cout << "Nhap so diem: "; cin >> n;
			a = new Diemmau[n+5];
			for(int i=0; i<n; i++){
				cout<<"Diem thu "<<i+1<<":\n";
				a[i].nhap();
			}
		}
		void xuat() {
			cout<<"\nDanh sach diem: ";
			for(int i=0; i<n; i++){
				a[i].xuat();
			}
		}
		void thongkemau() {
			int x[3]={};
			for(int i=0; i<n; i++){
				if(a[i].getmau() == 1) x[0]++;
				else if(a[i].getmau() == 2) x[1]++;
				else if(a[i].getmau() == 3)x[2]++;
			}
			cout << "\nThong ke diem theo mau:\n";
			cout << "Mau do : "<<x[0]<<" diem\n";
			cout << "Mau xanh : "<<x[1]<<" diem\n";
			cout << "Mau vang : "<<x[2]<<" diem\n";
		}
		void xa_nhat() {
			double max=-1;
			int d;
			for(int i=0; i<n; i++) {
				if(a[i].getmau()==1 && a[i].kc()>max)
				{
					max = a[i].kc();
					d=i;
				}
			}
			if(max == -1) {
				cout << "\nKhong co diem do nao";
			}
			else {
				cout<<"Diem do xa goc toa do nhat la: ";
				a[d].xuat();
			}
		}
		void mau_xanh() {
			int d[n],t=0;
			double sum=0;
			for(int i=0; i<n; i++) {
				if(a[i].getmau()==2)
				{
					d[t]=i;
					t++;
				}
			}
			if(t>=2){
			for(int i=0;i<t-1;i++) {
				for(int j=i+1;j<t;j++) {
					sum+=khoangcach(a[d[i]],a[d[j]]);
				}
			}
			t=t*(t-1)/2;
			cout<<"Do dai trung binh cua cac doan tao boi diem mau xanh la: "<<sum/t;
		    }
			else
			cout<<"\nChi co 1 diem mau xanh\n";
        }
};
int main(){
	dsDiem k;
	k.nhap();
	k.xuat();
	k.thongkemau();
	k.xa_nhat();
	k.mau_xanh();
	return 0;
}
