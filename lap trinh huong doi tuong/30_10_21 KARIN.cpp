#include<bits/stdc++.h>
using namespace std;

class nv{
	string ten;
	int mnv;
	
	public:
		string &getten(){return ten;}
		friend istream &operator>>(istream &is, nv&s);
		friend ostream &operator<<(ostream &os, nv s);
		
};

ostream &operator<<(ostream &os, nv s)
{
	os<<setw(30)<<left<<s.ten<<setw(10)<<s.mnv;
	return os;	
}

istream &operator>>(istream &is, nv&s)
{
	is.ignore(1);
	getline(is,s.ten);
	is>>s.mnv;
	return is;
}

class hd: public: nv{
	int ngaycong;
	double tiencong;
	public:
		void nhap(){
			nv::>>();
			cout<<"Nhap ngay cong: ";	cin>>ngaycong;
			cout<<"Nhap tien cong: ";	cin>>tiencong;
		}
		void xuat(){
			nv::>>();
			cout<<"Ngay cong: "<<ngaycong<<endl;
			cout<<"Tien cong: "<<tiencong<<endl;
		}
		double tienluong(){
			double t;
			t=ngaycong*tiencong;
			return t;
		}
};

class bc: public: nv{
    float hsl;
    int snct;
    int lcb = 3000;
    public:
        void nhap(){
            cout<<"Nhap he so luong";		cin>>hsl;
            cout<<"Nhap so nam cong tac";	cin>>snct;
        }

        void xuat(){
            cout<<"He so luong"<<hsl;
            cout<<"So nam cong tac"<<snct;
        }

        int tinh_luong(){
            if (snct<=3){
                return hsl*3000;
            }
            else if (snct>3&&snct<=5){
                return hsl*3000+3000;
            }
            else if (snct<=10){
                return hsl*3000+5000;
            }
            else if (snct<=15){
                return hsl*3000+7000;
            }
            else
                return hsl*3000+10000;
        }
};


int main()
{
			
}


