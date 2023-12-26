#include<bits/stdc++.h>
using namespace std;
class NgayThang {
	int ngay,thang,nam;
	public:
		void nhap1() {
			cout<<"Nhap ngay:";cin>>ngay;
			cout<<"Nhap thang:";cin>>thang;
			cout<<"Nhap nam:";cin>>nam;
		}
};
class Nguoi {
	string hoten;
	NgayThang ngaysinh;
	string diachi;
	public:
		void nhap2() {
			Nguoi a=*this;
			cout<<"Nhap ho ten:";fflush(stdin);getline(cin,a.hoten);
			a.nhap();
			cout<<"Nhap dia chi:";fflush(stdin);getline(cin,a.diachi);
		}
};
class KhachHang: public Nguoi{
	int makhachhang;
	int chisotruoc,chisosau;
	public:
		void nhap3() {
			KhachHang a=*this;
			cout<<"Nhap ma khach hang: ";cin>>a.makhachhang;
			a.nhap();
			cout<<"Nhap chi so thang truoc: ";cin>>chisotruoc;
			cout<<"Nhap chi so thang sau: ";cin>>chisosau;
		}
};
int main() {
	KhachHang x;
	x.nhap();
}
