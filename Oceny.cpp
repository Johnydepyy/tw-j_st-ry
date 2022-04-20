#include <iostream>
using namespace std;
int n,nr=0;
int tab[500005];
int main ()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>nr;
		tab[nr]++;
	}
	for(int i=0;i<=100;i++)
	{
		if(tab[i]>0)
		cout<<i<<" "<<tab[i]<<"\n";
	}
}