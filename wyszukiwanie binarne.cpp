#include <iostream>
using namespace std;
int p=0,k=0,x=0,s=0,n=0;
int tab[100000];
bool sprawdz(int x, int poz)
{
	if(x <= tab[poz])
	return true;
	else
	return false;
}
int main ()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tab[i];
	}
	p = 1;
	k = n + 1;
	x = 5;
	while(k != p+1)
	{
		s = (p+k)/2;
		if(sprawdz(x,s) == true)
		k=s;
		else
		p=s;
	}
	cout<<n-p;
}
