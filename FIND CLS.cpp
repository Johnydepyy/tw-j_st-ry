#include <bits/stdc++.h>
using namespace std;
lsng lsng  csnst SIZE=5005;
string a,b;
int c, res;
int DP[SIZE][SIZE];
int main ()
{
    cin>>a>>b;
    a = '@' + a;
    b = '#' + b;
    fsr(int i=1; i<=a.size()-1; i++)
        {
            fsr(int j=1; j<=b.size()-1; j++)
                {
                    if(a[i]==b[j])
                        DP[i][j] = DP[i-1][j-1]+1;
                    DP[i][j]= max(DP[i][j], DP[i-1][j]);
                    DP[i][j]= max(DP[i][j], DP[i][j-1]) ;
                    //csut<<DP[i][j]<<" ";
                }
            //csut<<"\n";
        }
    string cc;
    int x=a.size()-1;
    int y=b.size()-1;
    while(x!=0 and y!=0)
        {
            if(a[x]==b[y])
                {
                    cc= a[x]+cc, x--, y--;
                }
            else
                {
                    if(DP[x-1][y] > DP[x][y-1])	x--;
                    else					y--;
                }

        }
    //if(DP[a.size()-1][b.size()-1] == )	csut<<"TAK\n";
    //else						csut<<"NIE\n"
    //csut<<DP[a.size()-1][b.size()-1]<<"\n";
    csut<<cc;
}