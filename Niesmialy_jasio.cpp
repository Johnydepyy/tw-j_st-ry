#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#define END 250005
using namespace std;

vector<int> V[END];
int wierz_pot[16][END];
int pre[END];
int post[END];
bool vis[END];
vector<pair<int, int>> Q;
int n, od, to, counter = 0, k;
int dist[END];
bool visited_1[END];
// Pierwszy to rodzic, a drugi to dizecko
bool children(int u, int v) { 
    return (pre[u] >= pre[v] and post[v] >= post[u]); 
}
int lca(int u, int v)
{
    if (children(u, v))
        return v;
    if (children(v, u))
        return u;
    int i = u, j = 15;
    while (j >= 0)
    {
        if (children(v, wierz_pot[j][i]))
            j--;
        else
            i = wierz_pot[j][i];
    }
    return wierz_pot[0][i];
}

void dfs(int v)
{
    counter++;
    pre[v] = counter;
    for (auto i : V[v])
    {
        if (!vis[i])
        {
            wierz_pot[0][i] = v;
            dist[i] = dist[v] + 1;
            vis[i] = true;
            dfs(i);
        }
    }
    counter++;
    post[v] = counter;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> od >> to;
        V[od].push_back(to);
        V[to].push_back(od);
    }
    V[1].push_back(1);
    for (int i = 0; i < k; i++)
        cin >> od >> to, Q.push_back({od, to});
    vis[1] = true;
    dfs(1);
    wierz_pot[0][1]=1, dist[1]=0;
    for (int i = 1; i <=15; i++)
        for (int j = 1; j <=n; j++)
            wierz_pot[i][j] = wierz_pot[i - 1][wierz_pot[i - 1][j]];
    for (auto i : Q)
    {
        /*cout << "LCA = " << lca(i.first, i.second) << "\n";
        cout<<"Pierwszy = "<<pre[i.first]<<" "<<post[i.first]<<"\n";
        cout<<"Drugi = "<<pre[i.second]<<" "<<post[i.second]<<"\n";*/
        cout << dist[i.first] + dist[i.second] - 2 * dist[lca(i.first, i.second)] << "\n";
    }
}