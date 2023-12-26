#include<bits/stdc++.h>
using namespace std;
template<class T> class vecto{
	T x,y;
	public:
		void nhap(){
			cout<<"Nhap x:";cin>>x;
			cout<<"Nhap y:";cin>>y;
		}
		void tong(vecto a){
			vecto t;
		    t.x=x+a.x;
		    t.y=y+a.y;
		    cout<<"Vecto tong:("<<t.x<<","<<t.y<<")";
		}
		void tich(vecto a){
			T t;
			t=x*a.x+y*a.y;
		    cout<<"Tich vo huong:"<<t;
		}
		void tich1so(T k){
			vecto t;
			t.x=x*k;
			t.y=y*k;
			cout<<"Tich vecto voi 1 so:("<<t.x<<","<<t.y<<")";
		}
};
int main() {
	vecto<int> a,b;
	a.nhap();b.nhap();
	a.tong(b);
	a.tich(b);
	int n;
	cin>>n;
	a.tich1so(n);
}
