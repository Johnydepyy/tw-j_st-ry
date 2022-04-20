#include <bits/stdc++.h>
using namespace std;
long long  const SIZE=5005;
string a,b;
int c, res;
int DP[SIZE][SIZE];
int main ()
{
    cin>>a>>b;
    /*for(int i=0;i<a.size();i++)
    	for(int j=0;j<b.size();j++)
    		if(a[i]==b[j]) i=j;
    	res++;
    cout<<res<<endl;*/
    a = '@' + a;
    b = '#' + b;
    for(int i=1; i<=a.size()-1; i++)
        {
            for(int j=1; j<=b.size()-1; j++)
                {
                    if(a[i]==b[j])
                        DP[i][j] = DP[i-1][j-1]+1;
                    DP[i][j]= max(DP[i][j], DP[i-1][j]);
                    DP[i][j]= max(DP[i][j], DP[i][j-1]) ;
                    //cout<<DP[i][j]<<" ";
                }
            //cout<<"\n";
        }

    cout<<DP[a.size()-1][b.size()-1]<<"\n";
}