#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> V(10,1);
	V[3]=7;
	V[5]=4;
	V[9]=2;
	for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.pop_back(); //bot di phan tu cuoi cung
	vector<int>::iterator it; //khai bao bien la kieu bo Lap dang 1 con tro
	cout<<"\nVector: ";
	for(it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	V.back()=9;
	V.push_back(5);
	cout<<"\nVector: ";
	for(auto x:V) cout<<x<<" ";
	V.resize(15,-1);
	cout<<"\nVector: ";
	for(auto x:V) cout<<x<<" ";
	cout<<"\nDao day: ";
	for(vector<int>::reserve_iterator ri=V.rbegin();ri!=V.rend();ri++) cout<<*ri<<" ";
	cout<<"\nDung luong chua"<<V.capacity();
	cout<<"\nV[3] = "<<V.at(3);
	it=V.begin();it++;it++; //it = &V[2]
	V.insert(it,8);
	cout<<"\nVector sau khi chen: "; for(auto x:V) cout<<x<<" ";
	

}


