#include <iostream>
using namespace std;
long long n,wynik=0,j=1;
int tab[1000005];
int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tab[i];
	}
	for(int i=n;i>=1;i--)
	{
		if(j%2==0)
		{
			wynik = wynik - tab[i]*j;
		}
		else{
			wynik = wynik + tab[i]*j;
		}
		j++;
	}
	cout<<wynik;
}