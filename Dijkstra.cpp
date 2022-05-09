#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5;
long long END = 1e6;
long long n, m, res, a, k, d, x, y;
vector<pair<int, int>> wiktor[SIZE];
long long arr[SIZE];
bool vis[SIZE];
int dist[SIZE];
int Q[SIZE];
set<pair<int, int>> secik;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k >> a;
    for (int i = 1; i <= k; i++)
        cin >> x >> y >> m, wiktor[x].push_back({y, m}), wiktor[y].push_back({x, m});
    for (int i = 1; i <= n; i++)
        dist[i] = END;
    dist[a] = 0;
    secik.insert({0, a});
    while (!secik.empty())
    {
        pair<int, int> u = *secik.begin();
        secik.erase(u);
        if (vis[u.second])
            continue;
        vis[u.second] = true;
        for (auto i : wiktor[u.second])
            dist[i.first] = min(dist[i.first], dist[u.second] + i.second), secik.insert({dist[i.first], i.first});
    }
    for (int i = 1; i <= n; i++)
        cout << dist[i] << " ";
}