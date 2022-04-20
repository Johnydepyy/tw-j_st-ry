#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5 +10000;
long long END=1e5;
int n, m, b, x, y;
vector <int > wiktor[SIZE];
int maksimum[SIZE];
queue <int> queq;
bool visited[SIZE];
int dist[SIZE];
int ans;
void dfs(int u)
{
	visited[u]=true;
	dist[u]=1;
	for(auto i : wiktor[u])
	{
		if(!visited[i])	{
            dfs(i);
		    dist[u]+=dist[i];
            maksimum[u]=max(maksimum[u], dist[i]);
            }
	}
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n-1;i++)
       cin>>x>>y , wiktor[x].push_back(y), wiktor[y].push_back(x);
    dfs(1);
    
    for(int i=1;i<=n;i++)
        ans=max(dist[1]-dist[i], maksimum[i]), cout<<ans<<"\n";
}