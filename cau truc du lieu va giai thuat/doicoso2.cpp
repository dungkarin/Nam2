//doi co so 2
#include<bits/stdc++.h>
#include "Stack.cpp"
using namespace std;
int main()
{
	int n;
	char hex[]="0123456789ABCDFGHIJKLMNOPQRSTUVWXYZ";
	cin>>n;
	//printf("%X\n",n);
	
	Stack<char> S;
	while(n) {S.push(hex[n%16]); n/=16;}
	while(S.size()){cout<<S.top();S.pop();}


}


