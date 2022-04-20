#include <iostream>
using namespace std;
int tab[1000000];
int n, nr=0, wynik=0;
int main ()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>nr;
		tab[nr]++;
	}
	for(int i=0;i<n;i++)
	{
		if(tab[i]/3 == 0)
			wynik += tab[i]/3;
	}
	cout<<wynik;
}