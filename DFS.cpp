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
void dfs(int u)
{
	visited[u]=true;
	dist[u]=1;
	for(auto i : neighb_wiktor[u])
	{
		if(!visited[i])	dfs(i);
		dist[u]+=dist[i];
	}
	cout<<dist[u]<<"\n";
}
int main ()
{
	cin>>n;
	for(int i=1;i<=n-1;i++)
		cin>>x>>y, neighb_wiktor[x].push_back(y), neighb_wiktor[y].push_back(x);
	dfs(1);
}