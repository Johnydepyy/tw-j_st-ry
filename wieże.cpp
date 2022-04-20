#include <iostream>
using namespace std;
long long n,m,suma1,suma2;
int wynik=0;
int a[200005];
int b[200005];
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		suma1 = suma1 + a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		suma2 = suma2 + b[i];
	}
	while(suma1 != suma2)
	{
		if(suma1>suma2)
		{
			suma1 = suma1-(a[n-1]);
			wynik = wynik +1;
			n = n-1;
		}
		else
		{
			suma2=suma2-(b[m-1]);
			wynik = wynik +1;
			m = m -1;
		}
		
	}
	cout<<wynik;
}