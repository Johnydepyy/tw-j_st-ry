#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,dzielnik, tab[100001];
double r;
int main ()
{
    cin>>x>>y;
    for(int i=1; i<=x; i++)
        cin>>tab[i];
      dzielnik = y/x;
      sort(tab+1, tab+x+1);
    if(x/y == x*y)
        r = tab[x]/dzielnik;
    else
        r = tab[x]/(dzielnik+1);
    cout.precision(9);
    cout<<r;
}