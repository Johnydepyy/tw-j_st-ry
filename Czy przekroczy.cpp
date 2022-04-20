#include <iostream>
using namespace std;

int n;
int tab[1000005];
int main ()
{	cin>>n;
	for(int j=0; j<n; j++)
	{

		for(int i=1; i<2; i++)
		{	cin>>tab[i];
			if(tab[i]*tab[i+1] >= 10^18)
			{	cout<<"Jest Okej";
			}
			else
			{	cout<<"Przekroczy";
			}
		}
	}
}