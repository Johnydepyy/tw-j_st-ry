#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const long long SIZE=1000001;
typedef long long ll;
int  x=0, y, k, n, high, low, srd;
ll tab[SIZE];
ll DP[SIZE];
ll Q[SIZE];
/*8
2 4 7 6 4 3 5 10
1 1
1 2
1 3
2 4
3 5
3 6
4 7
5 8*/
int bin_search (int a, int b)
{
	int l=1;
	for(int i=a; i<=b; i++)
        tab[i]=Q[l], l++;
	cout<<" przed\n";
    sort(Q+1, Q+(y-x)+1);
    for(int i=1;i<=b-a;i++)	cout<<Q[i];
    cout<<" po\n";
    return Q[b-a+1];
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)	cin>>tab[i];
    for(int i=1; i<=n; i++)
        {
            cin>>x>>y;
            DP[i]=bin_search(x, y);
        }
    for(int i=1; i<=n; i++)	cout<<DP[i]<<"\n";
    return 0;
}