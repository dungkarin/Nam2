#include<bits/stdc++.h>
using namespace std;

struct diem
{
	double x,y;
	double kc(diem P)
	{
		return sqrt((P.x-x)*(P.x-x)+(P.y-y)*(P.y-y));
	}
};
struct tamgiac
{
	diem A,B,C;
	void nhap()
	{
		cout<<"nhap toa do A: ";cin>>A.x>>A.y;
		cout<<"nhap toa do B: ";cin>>B.x>>B.y;
		cout<<"nhap toa do C: ";cin>>C.x>>C.y;
	}
	double cv();
	double dt();
};
double tamgiac::cv()
{
	return A.kc(B)+B.kc(C)+C.kc(A);
}
int main()
{
	//diem A,M; A.x=A.y=0; M.x=3;M.y=4;
	//cout<<"Khoang cach AM"<<A.kc(M);
	tamgiac T;
	//T.nhap();
	cout<<"Nhap 3 dinh tam giac: "; cin>>T;
	cout<<"Chu vi tam giac: ";cin>>T.cv();

}


