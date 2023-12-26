#include<bits/stdc++.h>
using namespace std;

class PS{
	int a,b;
	public:
	/*PS()
		{
			a=0;b=1;
		}
		PS(int a,int b)
		{
			this->a=a;this->b=b;
		}*/
		PS(int a=0,int b=1)
		{
			this->a=a;this->b=b;
		}
		void xuat(){
			cout<<a<<"/"<<b;
		}
};
int main()
{
	PS p;
	p.xuat();
}
