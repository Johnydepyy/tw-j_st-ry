#include <iostream>
using namespace std;
int n, parzyste, nieparzyste;
int a[100000];
int main()
{
	cin>>n;
	parzyste = 0;
	nieparzyste = 0;
	if(n < 3 and n > 100000)
		return 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];		//wczytywanie liczb
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
		{

			parzyste = parzyste + 1;
		}
		else
		{
			nieparzyste = nieparzyste + 1;
		}						//Czego jest więcej?
	}
	for(int i=0; i<n; i++)
	{

		if(parzyste > nieparzyste)
		{
			if(a[i]%2 != 0)
				cout<<a[i]<<" ";
		}
		if(nieparzyste > parzyste)
		{
			if(a[i]%2 == 0)
				cout<<a[i]<<" ";
		}
	}							//wypisywanie odmiennej parzytsości
	return 0;
}
