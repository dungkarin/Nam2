#include<bits/stdc++.h>
using namespace std;
template<class T> class Vector{
	T x,y;
	public:
	
		void nhap(){
			cout<<"Nhap toa do x:";
			cin>>x;
			cout<<"Nhap toa do y:";
			cin>>y;
		}
		void tong(Vector a){
			Vector t;
		    t.x=x+a.x;
		    t.y=y+a.y;
		    cout<<"Vector tong:("<<t.x<<","<<t.y<<")";
		}
		void tich(Vector a){
			T t;
			t=x*a.x+y*a.y;
		    cout<<"Tich vo huong:"<<t;
		}
		void tichvoi1so(T k){
			Vector t;
			t.x=x*k;
			t.y=y*k;
			cout<<"Tich Vector voi 1 so:("<<t.x<<","<<t.y<<")";
		}
};
int main() {
	Vector<int> a,b;
	a.nhap();
	b.nhap();
	a.tong(b);
	a.tich(b);
	int n;
	cin>>n;
	a.tichvoi1so(n);
}
