#include<bits/stdc++.h>
using namespace std;
class A{
	int a1;
	protected: int a2;
	public: int a3;
	void f(){ cout<<"\nham cua lop A";}w
};
class B: A{
	int b1;
	protected: int b2;
	public: int b3;
	void f(){
		A::f();
		cout<<a1<<endl;
		cout<<a2<<endl;
		cout<<a3<<endl;
		cout<<a1<<endl;
		cout<<b2<<endl;
		cout<<b3<<endl;
	}	
};
int main()
{
	B x;
	cout<<x.a1<<"\t"<<x.b1;
	cout<<x.a2<<"\t"<<x.b2;
	cout<<x.a3<<"\t"<<x.b3;
	x.A::f();
	x.f();
}


