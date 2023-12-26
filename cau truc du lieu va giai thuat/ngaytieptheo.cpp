#include<bits/stdc++.h>
using namespace std;

class day
{
	int d,m,y;
	void nhap()
	{
		char c;
		cin>>p.d>>c>>p.m>>c>>p.y;
	}
	ostream &operator<<(ostream &os,day p)
	{
		os<<p.d<<"/"<<p.m<<"/"<<p.y;
		return os;
	}
	friend day operator++(day D,int)
	{
		day D1=D;
		int t[]={0,31,28+nhuan(D.y),31,30,31,30,31,31,30,31,30,31};
		if(D.d==t[D.m]) {D.d=1;D.m++;} else D.d++;
		if(D.m==13) {D.m=1;D.y++;}
		return D1;
	}
};

int main()
{
	day D	


}


