#include <bits/stdc++.h>
using namespace std;
const int SIZE = 1100000;
vector <pair <long long, long long> > q;
long long  DP[SIZE];
long long  arr[SIZE];
int n, k, x;

int main ()
{


    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    q.push_back({0, 0});
    for(int i=1; i<=n+1; i++)
        {
            if(q[x].second<i-k) x++;
            DP[i] = q[x].first + arr[i];
            while(q.back().first>DP[i])	q.pop_back();
            q.push_back({DP[i], i});
        }
    cout<<DP[n+1]<<"\n";
    return 0;
}