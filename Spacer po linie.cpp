#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long SIZE=1000001;
typedef long long ll;
int  x=0, y, k, n, high, low, srd;
ll tab[SIZE];
ll DP[SIZE];
int main ()
{
	ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>tab[i];
	for(int i=1;i<=n+1;i++) 
		DP[i] = tab[i] + min({DP[i-1], DP[i-2], DP[i-3]});
	cout<<DP[n+1];
}