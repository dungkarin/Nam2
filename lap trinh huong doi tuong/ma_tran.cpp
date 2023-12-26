#include<bits/stdc++.h>
using namespace std;
class MaTran{
	int sh,sc;
	float **tp;
	public:
istream & operator >>(istream &is, MaTran & A){
		cout<<"Nhap so hang ";is>>A.sh;
		cout<<"Nhap so cot ";is>>A.sc;
		A.tp=new float* [A.sh*A.sc];
		for(int i=0;i<A.sh;i++){	
			A.tp[i]=new float [A.sc];
		for(int j=0;j<A.sc;j++){
			cout<<"Nhap pt thu hang "<<i+1<<" cot "<<j+1<<": ";
			is>>A.tp[i][j];
		}
	}
	return is;
}
ostream & operator<<(ostream &os,const MaTran &A){
	for(int i=0;i<A.sh;i++){	
		for(int j=0;j<A.sc;j++){
			os<<A.tp[i][i]<<"\t";
		}
		os<<endl;
	}
}




};










int main()
{



}


