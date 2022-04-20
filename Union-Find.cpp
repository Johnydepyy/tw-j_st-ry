#include <bits/stdc++.h>
using namespace std;
long long n, wynik=0, x,y;
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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>x>>y;
            for(int i=1; i<=x; i++)
                tab[i]=i;
            int cc=x;
            for(int i=1; i<=y; i++)
                {
                    int a,b;
                    cin>>a>>b;
                    if(Find(a) != Find(b))
                        cc--, Union(a,b);
                }
            if(cc <= 1)	cout<<"TAK\n";
            else		cout<<"NIE\n";
        }
}