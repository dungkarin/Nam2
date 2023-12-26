//Lop trong C++
//Giai phuong trinh bac 2 ax^2+bX+c=0
#include<bits/stdc++.h>
using namespace std;
struct pt 
{
	double a,b,c;
	
	void nhap()
{
	cout<<"Nhap he so a,b,c "; cin>>a>>b>>c;
}
	void giai()
	{
		if(a==0)
		{
			if(!b) cout<<(c?"vo nghiem":"vo so nghiem");
			else cout<<"Nghiem bac nhat x= "<<-c/b;
		}
		else
		{
			double d=b*b-4*a*c;
			if(d<0) cout<<"Pt vo nghiem";
			else if(d==0) cout<<"Nghiem kep: "<<-b/2/a;
			else
			{
				double x=(-b-sqrt(d))/2/a;
				cout<<"x1 = "<<x<<"\nx2 = "<<-b/2-x;
			}
		}
	}

};
int main()
{
	pt a;


}


