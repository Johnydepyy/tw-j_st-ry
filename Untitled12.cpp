#include <bits/stdc++.h>
using namespace std;
int tab[10001];
long long  n,maks=0,mn=0,wynik=0,mid;
bool check(int x)
{
	if (x <= 18)	return true;
	else		return false;
}
int main ()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>tab[i];
    sort(tab+1,tab+n+1);
    maks=n,mn=0;
    while(mn+1!=maks)
    {
    	mid=(maks+mn)/2;
    	if(check(mid))	maks=mid;
	    else		mn=mid;	
    }
	wynik = n - maks;
	cout<<wynik;
}
