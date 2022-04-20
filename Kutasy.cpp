#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long SIZE=1000001;
typedef long long ll;
int  x=0, y, k, n, high, low, srd;
ll tab[SIZE];
ll DP[SIZE];
int minim (int x, int y) {
    int mn = DP[x] ;
    for (int i=max(0, x); i<y; i++)    
    	if (mn > DP[i]) mn=DP[i] ;
    return mn;
}
int main ()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>tab[i];
	for(int i=1;i<=n+1;i++) 
		DP[i] = tab[i] + minim(i-k, i);
	cout<<DP[n+1];
}