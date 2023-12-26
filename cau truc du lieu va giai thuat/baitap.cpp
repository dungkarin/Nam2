#include<bits/stdc++.h>
using namespace std;

class nv{
	string ten;
	int tuoi;
	double luong;
	public:
		int &gettuoi(){return tuoi;}
		double &getluong(){return luong;}
		friend istream &operator>>(istream &is, nv&s);
		friend ostream &operator<<(ostream &os, nv s);
		
};

ostream &operator<<(ostream &os, nv s)
{
	os<<setw(30)<<left<<s.ten<<setw(10)<<s.tuoi<<setw(4)<<s.luong<<"Tr Vnd";
	return os;	
}

istream &operator>>(istream &is, nv&s)
{
	is.ignore(1);
	getline(is,s.ten);
	is>>s.tuoi>>s.luong;
	return is;
}
bool luongtang(nv u,nv v){return u.getluong()>v.getluong();}
bool tuoigiam(nv u,nv v){return u.gettuoi()<v.gettuoi();}

class QL{
	vector<nv> C;
	double ltb(int k)
	{
		double t=0,d=0;
		for(auto c:C) if(c.gettuoi()==k) {d++; t+=c.getluong();}
		if(d==0) d=1;
		return t/d;	
	}
	void sx(bool dk(nv,nv))
	{
		for(int i=0;i<C.size();i++)
		for(int j=i+1;j<C.size();j++)
		if(dk(C[i],C[j])) swap(C[i],C[j]);
	}
	public:
		void sxluong(){sx(luongtang);}
		void sxtuoi(){sx(tuoigiam);}
		void ltbtuoi()
		{
			for(int i;i<200;i++)
			{
				double t=ltb(i);
				if(t) cout<<"\nLuong trung binh tuoi "<<i<<" la "<<setw(4)<<t<<"Tr Vnd";
			}
		}
		friend istream &operator>>(istream &is, QL&s)
		{
			int n;
			is>>n;
			s.C.resize(n);
			for(auto &c: s.C) is>>c;
			return is;
		}
		friend ostream &operator<<(ostream &os, QL s)
		{
			for(auto c: s.C) cout<<c<<"\n";
			return os;
		}
};


int main()
{
	QL L;
	ifstream fin("nhanvien.txt");
	fin>>L;
	fin.close();
	cout<<"\nDanh sach nhan vien : \n"<<L;
	L.ltbtuoi();
	L.sxluong();	cout<<"\n\nDanh sach nhan vien co luong tang dan : \n\n"<<L;
	L.sxtuoi();		cout<<"\nDanh sach nhan vien co tuoi giam dan : \n\n"<<L;	
}


