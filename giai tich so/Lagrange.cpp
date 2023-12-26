#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x[100],i,j,y,P=0;
	int L=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		cin>>x[i];	
		if(i==j)
		{
			return j;
		}
		if(i!=j)
		{
			L=(x-x[j])/(x[i]-x[j]);
			P=P+L*y[i]
		}

		}

	}


}


