#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#define END 1000005
using namespace std;

vector<int> V[END];
int wierz_pot[20][END];
int pre[END];
int post[END];
bool vis[END];
vector<pair<int, int>> Q;
int n, od, to, counter = 0, k;
int dist[END];
bool visited_1[END];
// Pierwszy to rodzic, a drugi to dizecko
bool children(int u, int v)
{
    return (pre[u] >= pre[v] && post[u] < post[v]);
}
// Przykład gdzie 4 i 5 z pz\rzykładowego
int lca(int u, int v) // u =4, v= 5;
{
    if (children(u, v))
        return v;
    if (children(v, u))
        return u;
    int i = u, j = 19; // i =4;
    while (j >= 0)
    {
        if (children(wierz_pot[j][i],v))       j--;
        // czy 5 jest rodzicem dla skoku z 4, 2 do 19,18 i tak dalej;
        else
            i = wierz_pot[j][i];
        // jeśli nie jest to i(=4) ustawiamy na wierzchołek na który skacze (z 4) 2 do 19,18 itp.;
    }
    return wierz_pot[0][i];
}

void dfs(int v)
{
    vis[v] = true;
    counter++;
    pre[v] = counter;
    for (auto i : V[v])
    {
        if (!vis[i])
        {
            wierz_pot[0][i] = v;
            dist[i] = dist[v] + 1;
            dfs(i);
        }
    }
    post[v] = counter;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n - 1; ++i)
    {
        cin >> od >> to;
        V[od].push_back(to);
        V[to].push_back(od);
    }
    for (int i = 1; i <= k; i++)
        cin >> od >> to, Q.push_back({od, to});
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < n; j++)
            wierz_pot[i][j] = 0;
    dfs(1);
    for (int i = 1; i < 20; i++)
        for (int j = 1; j < END; j++)
            wierz_pot[i][j] = wierz_pot[i - 1][wierz_pot[i - 1][j]];
    for (auto i : Q)
        if (dist[i.first] > dist[i.second])
            cout << dist[i.first] - dist[i.second] - (2 * dist[lca(i.first, i.second)]) << "\n";
        else
            cout << dist[i.second] - dist[i.first] - (2 * dist[lca(i.second, i.first)]) << "\n";
}