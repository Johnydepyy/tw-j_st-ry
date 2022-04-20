#include <bits/stdc++.h>
using namespace std;
char tab[1001][1001];
int DPD[1001][1001];
int DPP[1001][1001];
long long  n,m,k, z=1, j=1, res=0;
int main ()
{
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>tab[i][j];//, tab1[i][j]=tab[i][j];
    DPD[1][1]=k;
    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            {
                if(tab[j][i]=='.') DPD[j+1][i]= DPD[j][i], DPP[j][i+1]= DPP[j][i];
                long long  equal= DPD[j][i] + DPP[j][i];
                if(tab[j][i]=='D')
                    DPD[j+1][i]= equal/2 + equal%2, DPP[j][i+1]= equal/2;
                if(tab[j][i]=='P')
                    DPP[j][i+1]= equal/2 + equal%2, DPD[j+1][i]= equal/2;
            }
      cout<<DPD[n+1][m];
}