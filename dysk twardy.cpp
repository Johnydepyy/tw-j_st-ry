#include <bits/stdc++.h>
using namespace std;
long long n;
long long tab[1000005];
int Find(int u)
{
    if(tab[u]==u)
        return u;
    else
        {
            tab[u]=Find(tab[u]);
            return tab[u];
        }
}
void Union (int x, int y)
{
    tab[Find(x)] = Find(y);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    //tab[n+2];
    for(int i=1; i<=n; i++)
        tab[i]=i;
    for(int i=1; i<=n; i++)
        {
        	int x;
            cin>>x;
            Union(x, x+1);
            int wynik=Find(x);
            if(wynik==0)	cout<<"NIE\n";
            else		cout<<wynik<<"\n";
        }
}