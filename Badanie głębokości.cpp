#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
long long END=1e5;
int n, m, b, x, y;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
queue <int> queq;
bool visited[SIZE];
int dist[SIZE];
int ans;
void dfs(int u)
{
	visited[u]=true;
    
	for(auto i : neighb_wiktor[u])
	{
		if(!visited[i])	
            dist[i]=dist[u]+1, dfs(i);
	}
}
int main ()
{
	cin>>n;
	for(int i=1;i<=n-1;i++)
		cin>>x>>y, wiktor.push_back({x, y});
    for(int i=0;i<n-1;i++)
    {
        neighb_wiktor[wiktor[i].first].push_back(wiktor[i].second);
        neighb_wiktor[wiktor[i].second].push_back(wiktor[i].first);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
        cout<<dist[i]<<"\n"; 
}