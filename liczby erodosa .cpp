#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1e6 +1000;
long long END=1e5;
int n, m, b, x, y;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
int Q[SIZE];
queue <int> queq;
bool visited[SIZE];
int dist[SIZE];
int ans;
int main ()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>n>>m>>b;
    for(long long i=1;i<=n;i++)   dist[i]=10e5;
    dist[b]=0;
    for(long long  i=1;i<=m;i++)   
        cin>>x>>y, wiktor.push_back({x, y});
    for(auto i: wiktor) 
        neighb_wiktor[i.first].push_back(i.second), neighb_wiktor[i.second].push_back(i.first);
    queq.push(b);
    while(!queq.empty())
    {
        //cout<<"RObie bfs =\n";
        int u=queq.front();
        queq.pop();
        if(visited[u]) continue;
        visited[u]=true;
        for(auto i : neighb_wiktor[u])
            dist[i]=min(dist[i], dist[u]+1), queq.push(i);//, cout<<"Robię dystans= \n";
    }
    for(int i=1;i<=n;i++)  
    { if(dist[i]!=10e5)cout<<dist[i]<<"\n";
    else    cout<<"-1\n";
    }
}