#include <bits/stdc++.h>
using namespace std ;
string s;
int n, q,k, pary=0,cek=0, suma, res;
map <int, int > tab;
int main ()
{
	res=0, pary=0, cek=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>q>>k>>s;
            for(auto i : s)
                {
                    tab[i]++;
                }
            for(auto i : tab)
                {
                    pary+= (i.second)/2, cek+=(i.second)%2;
                }
            res+=2*(pary/k);
            cek+=2*(pary%k);
            if(cek >= k)
                {
                    res++;
                }
            cout<<res<<"\n";
            tab.clear();
        }
}