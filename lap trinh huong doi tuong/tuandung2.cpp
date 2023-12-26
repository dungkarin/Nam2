#include<bits/stdc++.h>
using namespace std;
class MatHang{
	int mahang;
	string tenhang;
	string hangsanxuat;
	int time;
	int dongia;
	public:
		MatHang(){
			mahang=0;
			tenhang="";
			hangsanxuat="";
			time=0;
			dongia=0;
		}
		void nhap(){
			cout<<"Nhap ma hang: "; cin>>mahang;
			cout<<"Nhap ten hang: "; cin.ignore();getline(cin,tenhang);
			cout<<"Nhap hang san xuat: "; cin.ignore();getline(cin,hangsanxuat);
			cout<<"Nhap thoi gian bao hanh (Thang): ";cin>>time;
			cout<<"Nhap don gia (Trieu dong): ";cin>>dongia;
		}
		void xuat(){
			cout<<"Ma hang: "<<mahang<<"\n";
			cout<<"Ten hang: "<<tenhang<<"\n";
			cout<<"Hang san xuat: "<<hangsanxuat<<"\n";
			cout<<"Thoi gian bao hanh: "<<time<<"(Thang)\n";
			cout<<"Don gia: "<<dongia<<"(Trieu dong)\n";
		}
		int getgia(){
			return dongia;
		}
		string gethsx(){
			return hangsanxuat;
		}
};
class DienThoai: public MatHang{
	string hedieuhanh;
	string boxuly;
	double trongluong;
	public:
		void nhap(){
			MatHang::nhap();
			cout<<"Nhap he dieu hanh: ";cin.ignore();getline(cin,hedieuhanh);
			cout<<"Nhap bo xu ly: ";cin.ignore();getline(cin,boxuly);
			cout<<"Nhap trong luong: ";cin>>trongluong;
		}
		void xuat(){
			MatHang::xuat();
			cout<<"He dieu hanh: "<<hedieuhanh<<"\n";
			cout<<"Bo xu ly: "<<boxuly<<"\n";
			cout<<"Trong luong: "<<trongluong<<"\n";
		}
		
};
class dsDienThoai{
	int n;
	DienThoai *a;
	public:
		void nhap(){
			cout<<"Nhap so luong dien thoai: ";cin>>n;
			a=new DienThoai[n];
			for(int i=0;i<n;i++){
				a[i].nhap();
			}
		}
		void tim(){
			int x,y;
			cout<<"Nhap khoang can tim: ";cin>>x;cin>>y;
			for(int i=0;i<n;i++){
				if(x<=a[i].getgia()&&a[i].getgia()<=y){
					a[i].xuat();cout<<"\n";
				}
				else cout<<"\nKhong tim thay dien thoai trong khoang gia nay!!!";
			}
		}
		void datnhat(){
			string k;
			int max;
			for(int i=0;i<n;i++){
				if(a[i].getgia()>max){
					max=a[i].getgia();
				}
			}
			cout<<"\nNhap hang san xuat: ";cin.ignore();getline(cin,k);
			for(int i=0;i<n;i++){
				if(a[i].gethsx()==k&&a[i].getgia()==max){
					cout<<"\nDien thoai cua hang san xuat "<<k<<"la dat nhat o cua hang!";
				}
				else cout<<"\nDien thoat cua hang san xuat "<<k<<"khong dat nhat o cua hang";
			}
			
		}
};
int main()
{
	dsDienThoai x;
	x.nhap();
	x.tim();
	x.datnhat();
}


