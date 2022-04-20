#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
long long END=1e5;
int n, m, b, x, y;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
int Q[SIZE];
queue <int> queq;
bool visited[SIZE];
int dist[SIZE];
int ans;
int where[SIZE];
int main ()
{
    ios_base::sync_with_stdio(0);
    //twój stary 
	cin.tie(0), cout.tie(0);
    int r;
    cin>>r;
    for(int q=1;q<=r;q++)
    {
    cin>>n>>m;
    for(long long  i=1;i<=m;i++)   
        cin>>x>>y, wiktor.push_back({x, y});
    for(auto i: wiktor) 
        neighb_wiktor[i.first].push_back(i.second), neighb_wiktor[i.second].push_back(i.first);
    for(long long i=1;i<=n;i++)   dist[i]=10e5;
    cin>>b;
    for(long long i=1;i<=b;i++)   
        cin>>Q[i], queq.push(Q[i]), dist[Q[i]]=0, where[Q[i]]=Q[i];
    sort(Q+1,Q+b+1);
    while(!queq.empty())
    {
        int u=queq.front();
        queq.pop();
        if(visited[u]) continue;
        visited[u]=true;
        for(auto i : neighb_wiktor[u])
        {
            dist[i]=min(dist[i], dist[u]+1), queq.push(i);
            if(dist[i] = dist[u]+1) where[i]=where[u];
        }
    }
    ans=END;
    for(int i=1;i<=n;i++)
        if( where[i] != where[i+1])    ans=min(ans, dist[i]+1);
    cout<<ans;
    }
}