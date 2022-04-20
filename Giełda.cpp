#include <bits/stdc++.h>
using namespace std;
long long  mn = 100000000000, n, mas=0,wynik=0;
long long tab[1000005];
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    for(long long i=1; i<=n; i++)
        {
            cin>>tab[i];
        }
    for(long long i=1; i<=n; i++)
        {
            if(tab[i]<mn)
            mn = tab[i];
            wynik = tab[i]-mn;
            if(wynik > 0)
            {
            	if(wynik > mas)
            	mas=wynik;
		}
        }
    cout<<mas;
}