#include<bits/stdc++.h>
using namespace std;
class phanso
{
	int x,y;
	public:
	friend istream &operator>>(istream &is,phanso &a)
		{
			cout<<"Nhap tu so:";is>>a.x;
			cout<<"Nhap mau so:";is>>a.y;
			return is;
		}
	friend ostream &operator<<(ostream &os,phanso a)
		{
			if(a.x==1 && a.y==1)
			os<<"1";
			else
			os<<a.x<<"/"<<a.y<<endl;
			return os;
		}
	friend phanso rutgon(phanso &);
		phanso operator+(const phanso &a)
		{
			phanso b=*this,c;
			c.x=a.x*b.y + a.y*b.x;
			c.y=a.y*b.y;
			return c;
		}
		phanso operator-(const phanso &a)
		{
			phanso b=*this,c;
			c.y=a.x*b.y - a.y*b.x;
			c.y=a.y*b.y;
			return c;
		}
		phanso operator*(const phanso &a)
		{
			phanso b=*this,c;
			c.x=a.x*b.x;
			c.y=a.y*b.y;
			return c;
		}
		phanso operator/(const phanso &a)
		{
			phanso b=*this,c;
			c.x=a.x*b.y;
			c.y=a.y*b.x;
			return c;
		}
};
	int ucln(int a,int b)
{
	if (b==0) return a;
    return ucln(b,a%b);
}
	phanso rutgon(phanso &a)
{
	int k=ucln(a.x,a.y);
	a.x=a.x/k;
	a.y=a.y/k;
	return a;
}
int main() 
{
	cout<<"Nhap vao 4 phan so:\n";
	phanso p1,p2,p3,p4,p;
	cin>>p1>>p2>>p3>>p4;
	phanso x,y,z;
	x=p1-p2;
	y=p4+p1;
	p=x/p3*y;
	rutgon(p);
	cout<<"Ket qua: "<<p;
}

