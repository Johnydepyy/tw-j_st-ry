#include <iostream>
using namespace std;
string wyraz, anagramy[1000000];
int ilosc;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cin>>wyraz;
	cin>>ilosc;
	for(int i= 0;i<ilosc; i++)
	{
		cin>>anagramy[i];
	}
	for(int i=0;i<ilosc;i++)
	{
		if(wyraz == anagramy[i])
		{
			cout<<"Tak\n";
		}elses
		{
			cout<<"NIE\n";
		}
	}
	
}