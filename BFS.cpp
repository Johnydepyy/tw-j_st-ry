#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1e5;
vector <pair < int, int> > E;
vector <int> graph[SIZE];
int dist[SIZE];
bool visited[SIZE];
int n, x, y;
queue <long long> Q;
int main ()
{
    //wyznaczanie sąsziadów;
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>x>>y, E.push_back({x, y});
    for(auto i : E) graph[i.first].push_back(i.second), graph[i.second].push_back(i.first);

    Q.push(0);
    while(!Q.empty())
    {
        long long u=Q.front();
        Q.pop();
        if(visited[u])  continue;
        visited[u]=true;
        for(auto i : graph[u])
            dist[i]=min(dist[i], dist[u]+1), Q.push(i);
    }
    cout<<dist[3];
}