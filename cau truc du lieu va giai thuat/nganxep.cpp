#include<bits/stdc++.h>
#include"Stack.cpp"

using namespace std;
int main()
{
	Stack<int> S; //khai bao 1 ngan xep rong chua cac so nguyen (luon rong)
	for(int x:{4,7,2,8,1,6}) S.push(x);
	
	S.top()=9;		//S.pop(); S.push(9);
	
	while(not S.empty())
	{
		cout<<S.top()<<" ";
		S.pop(); //lay ra khong quan tam gia tri
	}
	

}


