#include<iostream>
using namespace std;
int n,wynik;
int main ()
{
	cin>>n;
	for(int i=-n; i<=n; i++)
	{
		for(int j=-n; j<=n; j++)
			if(i*i+j*j > n*n)
			{
				wynik = wynik;
			}
			else
			{
				wynik = wynik + 1;
			}
	
	}
	cout<<wynik;
}