#include <iostream>
using namespace std;
int main ()
{
	int n,a,wynik=0;
	cin>>n;
	n = wynik;
	for(int i=1; i<=400; i++)
	{
		for(; n>0; n= n / 10)
		{
			wynik = wynik + (n%10)*(n%10);
		}
		wynik = n;	
	}
	cout<<n;
	

}