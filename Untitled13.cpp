#include <iostream>
using namespace std;
long long n;
int tab[100001],j=1,x=0;
int main ()
{
	cin>>n;
	for(long long i=1;i*i<=n;i++)
		if(n%i==0)	tab[j]=i,j++;
	j=0;
	for(long long i=1;i*i<=n;i++)
		cout<<tab[i],j++;
		
}