//jpierdole pierdole t zadania kurwa macjapierdole '
#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5 + 10000;
long long END = 1e5;
int n, m, k, x, y;
vector<pair<int, int>> wiktor[SIZE];
bool visited[SIZE];
int dist[SIZE];
int ans;
void dfs(int u)
{
    if(k>n)return ;
    for (auto i : wiktor[u])
    {
            dist[i.first] = min(dist[i.first], dist[u] + i.second); //, cout<<"HAHAHAH \n";
            ans += dist[i.first];
            k++;
            dfs(i.first);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
        cin >> x >> y >> m, wiktor[x].push_back({y, m}), wiktor[y].push_back({x, m});
    dist[0]=END;
    dfs(0);
    cout << ans / (n * n);
}