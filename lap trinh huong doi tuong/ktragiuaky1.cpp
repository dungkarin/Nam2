#include<bits/stdc++.h>
using namespace std;
class clb{
	string ten, ngay;
	int sl;
	public:
		friend istream &operator>>(istream &is, clb &p){
			is.ignore();
			getline(is, p.ten);
			getline(is, p.ngay);
			is>>p.sl;
			return is;
		}
		friend ostream &operator<<(ostream &os, clb p){
			os<<p.ten<<"  "<<p.ngay<<"  "<<p.sl<<"  "<<endl;
			return os;
		}
		int getsl(){
			return sl;
		}
		string getten(){
			return ten;
		}
};
class DS{
	int n;
	clb *a;
	public:
		friend istream &operator>>(istream &is, DS &p){
			is>>p.n;
			p.a=new clb[p.n+5];
			for(int i=1;i<=p.n;i++) is>>p.a[i];
			return is;
		}
		friend ostream &operator<<(ostream &os, DS p){
			os<<"DS CLB:\n";
			for(int i=1;i<=p.n;i++){
				os<<"clb"<<i<<": "<<p.a[i];
			}
			return os;
		}
		void tong(){
			cout<<"TONG DOANH THU CUA TUNG CAU LAC BO:\n";
			long t[7]={};
			for(int i=1;i<=n;i++){
				if(a[i].getten()=="Manchaster") t[1]+=a[i].getsl()*120;
				else if(a[i].getten()=="Paris SG") t[2]+=a[i].getsl()*80;
				else if(a[i].getten()=="Real Madrit") t[3]+=a[i].getsl()*85;
				else if(a[i].getten()=="Ac Milan") t[4]+=a[i].getsl()*90;
				else if(a[i].getten()=="Barcelona") t[5]+=a[i].getsl()*100;
				else if(a[i].getten()=="B.Munich") t[6]+=a[i].getsl()*110;
			}
			cout<<"Manchaster: "<<t[1];
			cout<<"Paris SG: "<<t[2];
			cout<<"Real Madrit: "<<t[3];
			cout<<"Ac Milan: "<<t[4];
			cout<<"Barcelona: "<<t[5];
			cout<<"B.Munich "<<t[6];
		}
		void giamdan(){
			cout<<"SO LUONG GIAM DAN CUA SO LUONG VE BAN:\n";
			for(int i=1;i<n;i++){
				for(int j=i+1;j<=n;j++){
					if(a[i].getsl()<a[j].getsl()) swap(a[i], a[j]);
				}
			}
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
		}
};
int main()
{
	DS P;
	cin>>P; cout<<P;
	P.tong();
	P.giamdan();
}
