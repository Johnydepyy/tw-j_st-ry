#include <bits/stdc++.h>
using namespace std;
long long  const SIZE=1005;
int END=10e18;
int a,b, n;
int c, res;
int DP[SIZE][SIZE];
int tab[SIZE][SIZE];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    for(int i=0; i<=b; i++)DP[a+1][i]=END;
    for(int i=1; i<=b; i++)DP[0][i]=END;
    for(int i=1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
                cin>>tab[i][j];
        }
    for(int i=1; i<=a; i++)	DP[i][1]=tab[i][1];
    for(int i=2; i<=b; i++)
        {
            for(int j=1; j<=a; j++)
                DP[j][i] = tab[j][i] + min({DP[j-1][i-1], DP[j][i-1], DP[j+1][i-1]}); 
            for(int x=1; x<=a; x++) DP[x][i]=min(DP[x][i], DP[x-1][i+tab[x][i]]);
            for(int x=a;x>=1;x--)	DP[x][i]=min(DP[x][i], DP[x+1][i+tab[x][i]]);
        }
    int res=END;
    for(int i=1; i<=a; i++)	if(DP[i][b]<res)	res=DP[i][b];
    cout<<res<<"\n";
}