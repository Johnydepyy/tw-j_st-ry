#include <bits/stdc++.h>
using namespace std;
long long n, wynik=0, x,y, m;
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
    cin>>n>>m;
    int cc=n, res=0, tres=0;
    for(int i=0;i<=n;i++) tab[i]=i;
   	if(m!=n)	return cout<<"NIE\n", 0;
   	while(m--)
   	{
   		cin>>x>>y;
   		if(Find(x)==Find(y))	 res++;
   		if(Find(x)!=Find(y))
   			Union(x, y), cc--;
	   }
	if(res>=1 && cc==1)	cout<<"TAK\n";
	else				cout<<"NIE\n";
}