#include<bits/stdc++.h>
using namespace std;
class kh {
	string mk,tk,tdu;
	int sdt,sl,ldv;
	public:
	    friend istream &operator>>(istream &is, kh &a) {
		    cout<<"Nhap ma khach hang: ";fflush(stdin);getline(is,a.mk);
		    cout<<"Nhap ten khach hang: ";fflush(stdin);getline(is,a.tk);
		    cout<<"Nhap so dien thoai: ";is>>a.sdt;
		    cout<<"Nhap ten do uong: ";fflush(stdin);getline(is,a.tdu);
		    cout<<"Nhap so luong: ";is>>a.sl;
		    cout<<"Nhap loai dich vu: ";is>>a.ldv;
		    return is;
	    }
	    friend ostream &operator<<(ostream &os, kh a) {
		    os<<"Ma khach hang: "<<a.mk<<endl;
		    os<<"Ten khach hang: "<<a.tk<<endl;
		    os<<"So dien thoai: "<<a.sdt<<endl;
		    os<<"Ten do uong: "<<a.tdu<<endl;
		    os<<"So luong: "<<a.sl<<endl;
		    os<<"Loai dich vu: "<<a.ldv<<endl;
		    return os;
	    }
	    int getldv() {
	    	return ldv;
		}
	    string getht(){
		    return tk;
	    }
	    long tientra(){
		    long sum;
		    if(tdu=="Coca cola")
		    sum=20000*sl;
		    else if(tdu=="Pepsi")
		    sum=15000*sl;
		    else
		    sum=10000*sl;
		    if(ldv==1)
		    sum+=2000000;
		    else
		    sum+=1200000;
		    return sum;
	    }
};
class dskh{
	int n;
	kh *a;
	public:
		friend istream &operator>>(istream &is,dskh &x){
			cout<<"Nhap so luong khach hang: ";is>>x.n;
			x.a=new kh[x.n+5];
			for(int i=0;i<x.n;i++){
				cout<<"Nhap khach hang thu "<<i+1<<":\n";
				is>>x.a[i];
			}
			return is;
		}
		friend ostream &operator<<(ostream &os,dskh x){
			os<<"\n\nDanh sach khach hang:\n";
			for(int i=0;i<x.n;i++){
				os<<"\nKhach hang thu "<<i+1<<":\n";
				os<<x.a[i];
				os<<"So tien can tra: "<<x.a[i].tientra()<<endl;
			}
			return os;
		}
		void timkiem(string t){
			int dem=0;
			for(int i=0;i<n;i++){
				if(a[i].getht()==t) {
					cout<<a[i];
					cout<<"So tien tra: "<<a[i].tientra()<<endl;
					dem++;
				}
			}
			if(dem==0){
				cout<<"\nKhach hang "<<t<<" hien chua co trong danh sach\n";
			}
		}
		void tongsotien(){
			long long sum1=0,sum2=0;
			for(int i=0;i<n;i++){
				if(a[i].getldv()==1)
				sum1+=a[i].tientra();
				else
				sum2+=a[i].tientra();
			}
			cout<<"\nTong so tien cua cua hang la:\n";
			cout<<"Loai 1: "<<sum1<<endl;
			cout<<"Loai 2: "<<sum2<<endl;
		}
		void dsgd(){
			for(int i=0;i<n-1;i++) {
				for(int j=i+1;j<n;j++) {
					if(a[i].tientra()<a[j].tientra())
					swap(a[i],a[j]);
				}
			}
			cout<<"\nDanh sach khach theo thu tu giam dan cua tien can tra la:\n";
			for(int i=0;i<n;i++)
			cout<<"Ho ten: "<<a[i].getht()<<"|"<<"So tien: "<<a[i].tientra()<<endl;
		}
};
int main() {
	dskh x;
	cin>>x;
	cout<<x;
	x.tongsotien();
	string t;
	cout<<"\nNhap ten khach hang can tim: ";fflush(stdin);getline(cin,t);
	x.timkiem(t);
	x.dsgd();
}
