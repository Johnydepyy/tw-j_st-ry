#include <bits/stdc++.h>
using namespace std;
//int const SIZE=100005;
int  END=10e17+7;
int x,y, n=1, i=1;
int c=1, res, maks;
int DP[100005];
int tab[1005][1005];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>x>>y;
    
    for(int i=1; i<=y; i++)tab[x+1][i]=END;
    for(int i=1; i<=x; i++)tab[i][y+1]=END;
    for(int i=1; i<=x; i++)
        {
            for(int j=1; j<=y; j++)
                cin>>tab[i][j];
        }
      cout<<tab[1][1]<<" ";
    while(tab[x][y]!=maks)
        {
            DP[c]=min({tab[i+1][n], tab[i][n+1]});

            if(DP[c]==2147483647 or DP[c]==0)cout<<" \n";
		else		 cout<<DP[c]<<" ",maks=DP[c];
            if(DP[c]==tab[i][n+1])	n+=1;
            if(DP[c]==tab[i+1][n])	i+=1;
            c++;
        }
        return 0;
}