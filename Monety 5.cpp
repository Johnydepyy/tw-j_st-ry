#include <bits/stdc++.h>
using namespace std;
int END=100000, n, R, m, y, suma;
int tab[100001];
int ztab[100001];
int  DP[100001];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n, DP[0]=0;
    for(int i=0; i<n; i++)	cin>>tab[i];
    cin>>m;
    for(int i=0; i<m; i++)	cin>>ztab[i];
    cin>>R;
    for(int i=1; i<=R; i++)
        {
            DP[i]=-END;
            for(int j=0; j<m; j++)
                DP[i]=max(DP[i], DP[i-ztab[j]]+1);
            for(int j=0; j<n; j++)
                DP[i]=max(DP[i], DP[i-tab[j]]);
        }
    cout<<DP[R-1];
}