#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long SIZE=1000001;
typedef long long ll;
int  x=0, y, k, n, high, low, srd, R;
ll DP[SIZE];
//vector pair<long long, long long> > tab[SIZE];
ll tab[SIZE];
ll waga[SIZE];
int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>x>>y, tab[i]=x, waga[i]=y;
	cin>>R;
	for(int i=1;i<=R;i++)	DP[i]=SIZE;
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(tab[j]<=i)
			DP[i]= max(DP[i], DP[i-tab[j]]+waga[j]);
		}
	}
	
	if(DP[R]!=SIZE) cout<<DP[R]-SIZE;
}