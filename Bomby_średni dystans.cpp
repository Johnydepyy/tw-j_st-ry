#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5 +10000;
long long END=1e5;
int n, m, b, x, y;
vector <pair < int , pair <int , int > > > wiktor;
queue <int> queq;
bool visited[SIZE];
int dist[SIZE];
int ans;
void dfs(int u)
{
	visited[u]=true;
	dist[u]=u.first;
	for(auto i : wiktor[u])
	{
		if(!visited[i])	{
            dfs(i);
		    dist[u]+=dist[i];
            ans=dist[i] * (n - dist[i]);
            }
	}
}
int main ()
{
    cin>>n;
    for(int i=1;i<=n-1;i++)
     cin>>x>>y>>z , wiktor.push_back({ z, {x, y}});
    dfs(1);
    cout<<ans/(n*n)<<"\n";
    
}