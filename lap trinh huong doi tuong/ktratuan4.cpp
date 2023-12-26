#include<bits/stdc++.h>
using namespace std;
class NS{
	string CCCD,hoten;
	int tuoi;
	public:
	void nhap() {
			cout<<"Nhap so the can cuoc cong dan: ";cin>>CCCD;
			cout<<"Nhap ho ten: ";fflush(stdin);getline(cin,hoten);
			cout<<"Nhap tuoi: ";cin>>tuoi;
		}
		void xuat() {
			cout<<"So the can cuoc cong dan: "<<CCCD<<endl;
			cout<<"Ho ten: "<<hoten<<endl;
			cout<<"Tuoi: "<<tuoi<<endl;
		}
		int gettuoi() {
			return tuoi;
		}
		string getht(){
			return hoten;
		}
};
class QL: public NS{
	char chucvu[4];
	int ngaycong;
	public:
	void nhap() {
			NS::nhap();
			cout<<"Nhap chuc vu: ";fflush(stdin);cin.getline(chucvu,4);
			cout<<"Nhap ngay cong: ";cin>>ngaycong;
		}
		void xuat() {
			NS::xuat();
			cout<<"Chuc vu: "<<chucvu<<endl;
			cout<<"Ngay cong: "<<ngaycong<<endl;
		}
		float tienluong() {
			float t;
			if(strcmp(chucvu,"GD")==0)
			t=ngaycong*550000 + 10000000;
			else if(strcmp(chucvu,"TP")==0)
			t=ngaycong*600000 + 6000000;
			else
			t=ngaycong*200000 + 4000000;
			return t;
		}
};
class ds{
	int n;
	QL *a;
	public:
		void nhap() {
			cout<<"Nhap so nhan su: ";cin>>n;
			a=new QL[n+1];
			for(int i=0;i<n;i++){
				cout<<"Nhap thong tin nhan su thu "<<i+1<<": \n";
				a[i].nhap();
			}
		}
		void xuat() {
			for(int i=0;i<n;i++) {
				a[i].xuat();cout<<endl;
			}
		}
		void luongtb() {
			long double x=0;
			for(int i=0;i<n;i++) {
				x+=a[i].tienluong();
			}
			cout<<"Luong trung binh cua cac nhan vien: "<<setprecision(2)<<fixed<<x/n<<endl;
		}
		void tim(string t) {
			int dem=0;
			for(int i=0;i<n;i++) {
				if(a[i].getht()==t) {
					cout<<"\nThong tin nhan vien can tim:\n";
					a[i].xuat();
					cout<<"\n";
					dem=1;
				}
			}
			if(dem==0)
			cout<<"\nKhong co ten nhan vien nao thoa man\n";
		}
		void nguoi_tre_nhat() {
			int min=0;
			for(int i=1;i<n;i++) {
				if(a[min].gettuoi()>a[i].gettuoi())
				min=i;
			}
			cout<<"Nguoi co tuoi tre nhat la: "<<a[min].getht()<<"\t\tTuoi: "<<a[min].gettuoi()<<endl;
		}
		void luong_max() {
			int max=0;
			for(int i=1;i<n;i++) {
				if(a[max].tienluong()<a[i].tienluong())
				max=i;
			}
			cout<<"Nguoi co tien luong cao nhat la: "<<a[max].getht()<<"\tTien luong: "<<a[max].tienluong();
		}
};
int main()
{
	ds x;
	x.nhap();
	x.xuat();
	x.luongtb();
	string t;
	cout<<"\nNhap ho ten nhan vien can tim: ";fflush(stdin);getline(cin,t);
	x.tim(t);
	x.nguoi_tre_nhat();
	x.luong_max();
}


