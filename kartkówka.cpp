#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5;
long long END = 1e6;
long long n, m, res, a, k, d, mn;
char x;
set<pair<long long , long long >> secik;
long long arr[SIZE];
bool vis[SIZE];
int dist[SIZE];
int Q[SIZE];
pair<int, int> t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> d, secik.insert({d, i}), Q[i] = d;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        if (x == 'R')
        {
            cin >> k >> d;
            if(!secik.count({Q[k], k})) continue;
            secik.erase({Q[k], k});
            Q[k] -= d;
            secik.insert({Q[k], k});
        }
        if (x == 'M')
        {
            res++;
            auto e = secik.end();
            e--
            pair<int ,int> t= e*;
            // cout<<"TWIERDZE ŻE TO KONIEC KOLEJKI = "<<r.first<<" "<<r.second;
            secik.erase(t), dist[res] = t.second;
        }
    }
    for (int i = 1; i <= res; i++)
        cout << dist[i] << " ";
}