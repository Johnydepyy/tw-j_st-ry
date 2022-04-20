#include <bits/stdc++.h>
using namespace std;
long long const SIZE=10^4;
long long END=10^5;
long long n, m, x, y, q, res;
vector <int> wiktor[SIZE];
queue <int> queq;
int st[SIZE];
long long  dist[SIZE];
bool visited[SIZE];
int main ()
{
    cin>>n>>m>>q;
    for(int i=1;i<=m;i++)   cin>>x>>y,st[y]++ ,wiktor[x].push_back(y), wiktor[y].push_back(x);
    for(int i=2;i<=n;i++)   dist[i]=END;
    queq.push(1);
    while(!queq.empty())
    {
        int u = queq.front();
        queq.pop();
        if(visited[u]) continue;
        visited[u]=true;
        for(auto i : wiktor[u])
        {
            dist[i]=min(dist[i], dist[u]+1), queq.push(i);
        }
    }
    for(int i=1;i<=n;i++)   res=max(res, dist[i]);
    cout<<res;
}