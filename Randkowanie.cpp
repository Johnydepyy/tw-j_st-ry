#include <bits/stdc++.h>
using namespace std;
int n,x,y,wynik=0;
pair <int, int> tab[1000001];
int main ()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>x>>y, tab[i] = {x, y};
        }
    sort(tab+1, tab+n+1);
    for(int i=1; i<=n; i++)
        {
            int R=1;
            while(R < n)
                {
                    if(tab[i].first <= tab[i+R].first)
                        {
                            x = tab[i].second - tab[i].first, y=tab[i+R].first-tab[i].first;
                            if(x >= y)	wynik++;
                        }
                    R++;
                }
        }
    cout<<wynik;
}