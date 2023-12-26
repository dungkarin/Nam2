#include<iostream>
using namespace std;
struct MaTran{
	int sh,sc;
	float **tp;
};
istream & operator >>(istream &is, MaTran & A)
{
	cout<<"nhap so hang ";is>>A.sh;
	cout<<"nhap so cot ";is>>A.sc;
	A.tp=new float* [A.sh*A.sc];
	for(int i=0;i<A.sh;i++)
	{	A.tp[i]=new float [A.sc];
		for(int j=0;j<A.sc;j++)
		{
			cout<<"nhap pt thu hang "<<i+1<<" cot "<<j+1<<": ";
			is>>A.tp[i][j];
		}
	}
	return is;
}
ostream & operator<<(ostream &os,const MaTran &A)
{
	for(int i=0;i<A.sh;i++)
	{	
		for(int j=0;j<A.sc;j++)
		{
			os<<A.tp[i][i]<<"\t";
		}
		os<<endl;
	}
}
MaTran nhan(const MaTran &A,int k=2)
{ MaTran T;
	T.sh=A.sh; T.sc =A.sc;
		T.tp=new float *[T.sh*T.sc];
		for(int i=0;i<T.sh ;i++)
		{
			T.tp[i]=new float[T.sc];
			for(int j=0;j<T.sc;j++)
				T.tp [i][j]=k*A.tp [i][j];
		}
return T;
}
MaTran operator*(const MaTran &A,const MaTran &B)
{	 MaTran T;	
	if(A.sc==B.sh)
	{
		T.sh=A.sh; T.sc =B.sc;
		T.tp=new float *[T.sh*T.sc];
		for(int i=0;i<T.sh ;i++)
		{
			T.tp[i]=new float[T.sc];
			for(int j=0;j<T.sc;j++)
			{
				T.tp[i][j]=0;
				for(int k=0;k<B.sh;k++)
					T.tp[i][j]+=A.tp[i][k]*B.tp[k][j];
			}
		}	
	}
	else
	{
		T.sh=0; T.sc =0;T.tp=NULL;
		cout<<"\n so cot cua ma thu nhat khac so cot cua ma tran thu 2 ";
	}

	return T;
}
float operator!(const MaTran &A)
{
	float T=0;
		for(int i=0;i<A.sh;i++)
		for(int j=0;j<A.sc;j++)
			T+=A.tp[i][j];
	return T;
}
MaTran operator+(const MaTran &A,const MaTran &B)
{	 MaTran T;	
	if(A.sc==B.sc && A.sh==B.sh)
	{
		T.sh=A.sh; T.sc =B.sc;
		T.tp=new float *[T.sh*T.sc];
		for(int i=0;i<T.sh ;i++)
		{
			T.tp[i]=new float[T.sc];
			for(int j=0;j<T.sc;j++)
			{
				T.tp[i][j]=A.tp[i][j]+B.tp[i][j];
			}
		}	
	}
	else
	{
		T.sh=0; T.sc =0;T.tp=NULL;
		cout<<"\n 2 ma tran k cungf kich thuoc\n ";
	}

	return T;
}
int main()
{
	MaTran A,B,C;
	cout<<" nhap ma tran A \n";
	cin>>A;
/*	cout<<" nhap ma tran B \n";
	cin>>B;
	cout<<" nhap ma tran C \n";
	cin>>C;*/
	MaTran T;//A*B
	//T=operator*(A,B);
	T=nhan(A,7);
	cout<<A<<endl<<T;
	//T=A+ B*C;//T=Cong(A,nhan(B,C));*/
	/*cout<<2*B<<endl<<A*B;
	cout<<" \nma tran A \n"<<A;
	cout<<" \nma tran B \n"<<A;
	cout<<" \nma tran C \n"<<A;
	cout<<" \nma tran A+B*C \n"<<T;*/
}

