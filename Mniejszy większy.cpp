#include <bits/stdc++.h>
using namespace std ;
int n, mx=0,  k, x=0, y;
int  res[1000001];
string kij;
int tab1[100010];
int main ()
{
	cin>>n;
	cin>>kij, kij+='<';
	for(int i=1;i<=n;i++)
	{
		if(kij[i]=='<')
		{
			cout<<"ZNALAZŁEM <"<<"\n";
		
			if(x==0)	res[i]=i;
			else	
			{
				y=x;
				for(int z=i-1;z>=i-x-1;z--)
					res[z]=i-x, x--;
							}
		}
		if(kij[i]=='>')	x++, cout<<"ZNALAZŁEM > x = "<<x<<"\n";
	}
	for(int i=1;i<=n;i++)	cout<<res[i]<<" ";
}