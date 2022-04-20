#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int szukana_liczba,n,szukana_liczba1,szukana_liczba2, szukana_liczba3;
	string w;
int main ()
{
	srand( time( NULL ) );
	szukana_liczba = (std::rand()%100) + 1;
	cout<<"Wygenerowalem jakas liczbe z zakresu od 1 do 100"<<endl<<"twoim zadaniem jest zgadnac te liczbe"<<endl;
	for(int i; i < 200 ; i++)
	{
		cin>>n;
		if(szukana_liczba == n)
		{
			cout<<"TAK"<<endl;
			cout<<"To jest ta liczba, oto twoj wynik"<<endl<<i + 1<<endl ;
			i = szukana_liczba;
			break;
		}
		else
		{
			if(szukana_liczba > n)
				cout<<"wieksze"<<endl;
			if(szukana_liczba < n)
				cout<<"mniejsze"<<endl;
		}
	}
	srand( time( NULL ) );
	szukana_liczba = (std::rand()%50) + 1;
	cout<<"Wygenerowalem jakas liczbe z zakresu od 1 do 50"<<endl<<"twoim zadaniem jest zgadnac te liczbe"<<endl;
	for(int i; i < 200 ; i++)
	{
		cin>>n;
		if(szukana_liczba == n)
		{
			cout<<"TAK"<<endl;
			cout<<"To jest ta liczba, oto twoj wynik"<<endl<<i + 1<<endl ;
			i = szukana_liczba1;
			break;
		}
		else
		{
			if(szukana_liczba > n)
				cout<<"wieksze"<<endl;
			if(szukana_liczba < n)
				cout<<"mniejsze"<<endl;
		}
	}
	srand( time( NULL ) );
	szukana_liczba = (std::rand()%30) + 1;
	cout<<"Wygenerowalem jakas liczbe z zakresu od 1 do 30"<<endl<<"twoim zadaniem jest zgadnac te liczbe"<<endl;
	for(int i; i < 200 ; i++)
	{
		cin>>n;
		if(szukana_liczba == n)
		{
			cout<<"TAK"<<endl;
			cout<<"To jest ta liczba, oto twoj wynik"<<endl<<i + 1<<endl ;
			i = szukana_liczba2;
			break;
		}
		else
		{
			if(szukana_liczba > n)
				cout<<"wieksze"<<endl;
			if(szukana_liczba < n)
				cout<<"mniejsze"<<endl;
		}
	}
	srand( time( NULL ) );
	szukana_liczba = (std::rand()%10) + 1;
	cout<<"Wygenerowalem jakas liczbe z zakresu od 1 do 10"<<endl<<"twoim zadaniem jest zgadnac te liczbe"<<endl;
	for(int i; i < 200 ; i++)
	{
		cin>>n;
		if(szukana_liczba == n)
		{
			cout<<"TAK"<<endl;
			cout<<"To jest ta liczba, oto twoj wynik"<<endl<<i + 1<<endl ;
			i = szukana_liczba3;
			break;
		}
		else
		{
			if(szukana_liczba > n)
				cout<<"wieksze"<<endl;
			if(szukana_liczba < n)
				cout<<"mniejsze"<<endl;
		}
	}
	int wynik = szukana_liczba + szukana_liczba1 +szukana_liczba2 + szukana_liczba3;
	cout<<szukana_liczba<<endl<<szukana_liczba1<<endl<<szukana_liczba2<<endl<<szukana_liczba3<<endl;
	cout<<wynik;
}