#include <bits/stdc++.h>
using namespace std;
long long maks_el, diff=0, sum=0;
long long n, m;
long long bench[1000001];
int main ()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n>>m;
    for(long long  i=0;i<n;i++)   cin>>bench[i];
    sort(bench, bench+n);
    for(long long i=n-2;i>=0;i--)
    {
        diff=bench[i+1]-bench[i];
        m=m-diff;
        bench[i]=bench[i+1];
    }
    cout<<(m+n-1)/n + bench[n-1];
    
}