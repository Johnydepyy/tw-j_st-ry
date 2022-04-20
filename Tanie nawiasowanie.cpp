#include <bits/stdc++.h>
using namespace std;
long long  const SIZE=3005;
int a,b, n, x, y;
int c, res=0;
string s;
pair <int, int > tab[SIZE];
long long DP[SIZE][SIZE];
long long END=10e10+7;
int main ()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>x>>y, tab[i]= {x, y};
        }
    for(int i=1; i<=n; i++)	DP[0][i]=END, DP[i][0]=END, DP[i][n+1]=END, DP[n][i]=END;
    for(int i=1; i<=n; i++)
        for(int j=0; j<n; j++)
            {
                if(j==0)	DP[i][j]=DP[i-1][j+1]+tab[i].second;
                else
                    DP[i][j]=min(DP[i-1][j+1]+tab[i].second, DP[i-1][j-1]+tab[i].first);
            }
    cout<<DP[n][0]<<" ";
  x=0,y=n;
    while(x>=0 && y>0)
        {
            if(DP[y][x]==DP[y-1][x+1]+tab[y].second) x++,y--,s=")"+s;
            else x--,y--,s="("+s;
        }
     cout<<s;
}