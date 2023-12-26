#include<bits/stdc++.h>


using namespace std;


class khachhang 
{
	string makh,tenkh,diachi;
	int ngaychot,sothangtruoc,sothangsau;
	public:
	    friend istream &operator>>(istream &is, khachhang &a) 
		{
		    cout<<"Nhap ma khach hang: ";fflush(stdin);getline(is,a.makh);
		    cout<<"Nhap ten khach hang: ";fflush(stdin);getline(is,a.tenkh);
		    cout<<"Nhap ngay chot: ";is>>a.ngaychot;
		    cout<<"Nhap dia chi khach hang: ";fflush(stdin);getline(is,a.diachi);
		    cout<<"Nhap so thang truoc: ";is>>a.sothangtruoc;
		    cout<<"Nhap so thang sau: ";is>>a.sothangsau;
		    return is;
	    }
	    friend ostream &operator<<(ostream &os, khachhang a) 
		{
		os<<"Ma khach hang: "<<a.makh<<endl;
		os<<"Ten khach hang: "<<a.tenkh<<endl;
		os<<"Ngay chot: "<<a.ngaychot<<endl;
		os<<"Dia chi khach hang: "<<a.diachi<<endl;
		os<<"So thang truoc: "<<a.sothangtruoc<<endl;
		os<<"So thang sau: "<<a.sothangsau<<endl;
		return os;
	    }
	    string getht()
		{
		return tenkh;
	    }
	    int sotien()
		{
		int x=sothangsau-sothangtruoc;
		long long sum;
		if(x<=50)
		sum=x*1000;
		else if(x>50 && x<=100)
		sum=50*1000+(x-50)*1200;
		else if(x>100 && x<=200)
		sum=50*1000+50*1200+(x-100)*1300;
		else if(x>200)
		sum=50*1000+50*1200+100*1300+(x-200)*5400;
		long double tong;
		tong=sum+sum*0.1;
		return tong;
	    }
};
class dskh
{
	int n;
	khachhang *a;
	public:
		friend istream &operator>>(istream &is,dskh &x)
		{
			cout<<"Nhap so luong khach hang: ";is>>x.n;
			x.a=new khachhang[x.n+5];
			for(int i=0;i<x.n;i++){
				cout<<"Nhap khach hang thu "<<i+1<<":\n";
				is>>x.a[i];
			}
			return is;
		}
		friend ostream &operator<<(ostream &os,dskh x)
		{
			os<<"Danh sach khach hang:\n";
			for(int i=0;i<x.n;i++){
				os<<"Khach hang thu "<<i+1<<":\n";
				os<<x.a[i];
			}
			return os;
		}
		void timkiem(string t)
		{
			int dem=0;
			for(int i=0;i<n;i++)
			{
				if(a[i].getht()==t) 
				{
					cout<<"Ho ten khach hang: "<<a[i].getht();
					cout<<"\nSo tien phai tra: "<<a[i].sotien()<<endl;
					dem++;
				}
			}
			if(dem==0){
				cout<<"Khach hang "<<t<<" hien chua co trong danh sach\n";
			}
		}
		void danhsachhotro()
		{
			int dem=0;
			for(int i=0;i<n;i++)
			{
				if(a[i].sotien()>2000000)
				{
					cout<<a[i];
					dem++;
				}
			}
			if(dem==0)
			{
				cout<<"Khong co khach hang nao duoc nhan ho tro";
			}
		}
};
int main() 
{
	dskh x;
	cin>>x;
	cout<<x;
	string t;
	cout<<"Nhap ten khach hang can tim: ";fflush(stdin);getline(cin,t);
	x.timkiem(t);
	cout<<"Danh sach khach hang nhan ho tro:\n";
	x.danhsachhotro();
}
