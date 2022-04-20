#include <iostream>
#include <algorithm>
using namespace std;
long long   n,czymozna;
long long a[1000005];
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
	sort(a,a+n);
	int start=0,koniec=0,wynik=1;
	for(start = 0 ; start<n; start++)
		{
			while(a[start]*2 > a[koniec+1] && koniec +1 <n)
				{
					koniec = koniec + 1;
					wynik = max(wynik,koniec-start+1);
				}
		}
	cout<<wynik;
}