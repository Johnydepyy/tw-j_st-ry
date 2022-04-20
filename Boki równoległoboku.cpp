#include <bits/stdc++.h>
using namespace std;
int tab[101];
int main ()
{
	for(int i=1;i<=4;i++)
		cin>>tab[i];
	sort(tab+1, tab+4+1);
	if(tab[1]==tab[2] && tab[3]==tab[4])	cout<<"TAK\n";
	else							cout<<"NIE\n";
	return 0;
 } 
