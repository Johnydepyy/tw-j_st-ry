#include <bits/stdc++.h>
#include <vector>
using namespace std;
long long const SIZE=5*1e5 +10000;
long long END=1e5;
int n, m, b, x, y, z, j;
vector < pair <int , int > >  wiktor;
vector < int > neighb_wiktor[SIZE];
bool visited[SIZE];
int dist[SIZE];
int Q[SIZE];
int ans=END;
void dfs(int u)
{
	visited[u]=true;
	dist[u]=Q[u];
	for(auto i : neighb_wiktor[u])
	{
		if(!visited[i])	{
            dfs(i);
		    dist[u]+=dist[i];
            if(n > dist[u]) ans= dist[u] * (n - dist[u])+1;
            else            ans= dist[u]* (dist[u] - n)+1;
            }
	}
}
int main ()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
     cin>>x>>y>>z , wiktor.push_back({x, y}), Q[i]=z;
    for(auto i: wiktor) 
        neighb_wiktor[i.first].push_back(i.second), neighb_wiktor[i.second].push_back(i.first);
    dfs(1);
    cout<<ans/(n*n)<<"\n";
    
}