#include<bits/stdc++.h>


using namespace std;
class sinhvien
{
	public:
	    string ten;
	    float tuoi;
	    float diem;
		friend istream &operator>>(istream &is,sinhvien &a)
		{
			cout<<"Nhap ten:";fflush(stdin);getline(is,a.ten);
			cout<<"Nhap tuoi:";is>>a.tuoi;
			cout<<"Nhap diem:";is>>a.diem;
			return is;
		}
		friend ostream &operator<<(ostream &os,sinhvien a)
		{
			os<<"Ten:"<<setw(10)<<left<<a.ten<<"|";
			os<<"Tuoi:"<<setw(10)<<left<<a.tuoi<<"|"<<"Diem:"<<setw(10)<<left<<a.diem<<endl;
			return os;
		}
};
class lophoc
{
	int n;
	sinhvien *a;
	public:
		friend istream &operator>>(istream &is,lophoc &x)
		{
			cout<<"Nhap so sinh vien:";is>>x.n;
			x.a=new sinhvien[x.n+1];
			for(int i=0;i<x.n;i++)
			{
				cout<<"Sinh vien thu "<<i+1<<endl;
				is>>x.a[i];
			}
			return is;
		}
		friend ostream &operator<<(ostream &os,lophoc x)
		{
			for(int i=0;i<x.n;i++)
			{
				os<<x.a[i];
			}
			return os;
		}
		void diemtb(float k)
		{
			float sum=0;
			int i,dem=0;
			for(i=0;i<n;i++)
			{
				if(a[i].tuoi==k)
				{
					sum+=a[i].diem;
					dem++;
				}
			}
			if(a[i].tuoi!=k)
			{
				cout<<"Khong co sinh vien nao co tuoi can tim!!!\n";
			}
			else 
			{
			cout<<"Diem trung binh theo tuoi "<<k<<" la: ";
			cout<<sum/dem*1.0<<endl;
			}
		}
		void tuoi()
		{
			float t[n];
			int d=1;
			t[0]=a[0].tuoi;
			for(int i=1;i<n;i++)
			{
				int dem=0;
				for(int j=0;j<n;j++)
				{
					if(a[i].tuoi==t[j])
					dem++;
				}
				if(dem==0)
				{
					t[d]=a[i].tuoi;
					d++;
				}
			}
			for(int i=0;i<d;i++)
			{
				float sum=0;
				int dem=0;
				for(int j=0;j<n;j++)
				{
					if(a[j].tuoi==t[i])
					{
						sum+=a[j].diem;
						dem++;
					}
				}
				cout<<"Tuoi "<<t[i]<<": "<<sum/dem*1.0<<endl;
			}
		}
		void tangdan()
		{
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++)
				{
					if(a[i].diem>a[j].diem)
					swap(a[i],a[j]);
				}
			}
		}
		void giamdan()
		{
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i].tuoi<a[j].tuoi)
					swap(a[i],a[j]);
				}
			}
		}
};
int main() 
{
	lophoc x;
	cin>>x;
	cout<<"Danh sach sinh vien:\n";
	cout<<x;
	float k;
	cout<<"Nhap tuoi can tinh diem trung binh: ";cin>>k;
	x.diemtb(k);
	cout<<"Diem trung binh theo tuoi:\n";
	x.tuoi();
	x.tangdan();
	cout<<"Danh sach sap xep theo diem tang dan:\n";
	cout<<x;
	x.giamdan();
	cout<<"Danh sach sap xep theo tuoi giam dan:\n";
	cout<<x;
}
