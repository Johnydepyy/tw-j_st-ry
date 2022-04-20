#include <bits/stdc++.h>
using namespace std;
long long KoP_DM, KoP_HP, KaR_DM, KaR_HP, T_kopor, T_karol;
long long q, n,k, w;
long long  j, z, res;
bool check(long long hk, long long ak, long long hw, long long aw)
{
    return ((hk+aw-1)/aw)>=((hw+ak-1))/ak;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            res=0;
            cin>>KoP_HP>>KoP_DM>>KaR_HP>>KaR_DM;
            cin>>q>>k>>w;
            for( j=0, z=q; z>=0; j++, z--)
                {
                    if (check(KoP_HP+w*j, KoP_DM+z*k, KaR_HP, KaR_DM))
                        {
                            cout<<"TAK\n", res=1;
                            break;
                        }
                }
            if(res==0)	cout<<"NIE\n";
        }
}