#include <bits/stdc++.h>
using namespace std;
long long n=1, wynik=0, x,y,q,cc;
long long tab[1000005];
long long Q[1000005];
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
    cin>>x>>y,cc=x;
    for(int i=1; i<=x; i++)
        tab[i]=i;
    for(int i=1; i<=y; i++)
        {
            int a,b;
            cin>>a>>b;
            if(Find(a)!=Find(b))
                cc--,Union(a, b);
        }
    cin>>q;
    for(int i=1; i<=q; i++)
        cin>>Q[i];
    sort(Q+1,Q+q+1);
	for(int i=1;i<=y;i++)
	{
		if(i != Q[n])
	}
}