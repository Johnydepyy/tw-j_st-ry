#include <iostream>
#include <math.h>
using namespace std;
int n,p=0,k=0,s=0;
int a[1000005];
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		p=0;
		k=n+1;
		while(k != p+1)
		{
			s = (p+k)/2;
			if(s*s*s <= n)
			p=s;
			else
			k=s;
		}
		cout<<p<<"\n";
	}
	
	
}