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
int stoper=1;
int pre[SIZE];
int post[SIZE];
void dfs(int u)
{
	visited[u]=true;
	pre[u]=stoper, stoper++;
	for(auto i : neighb_wiktor[u])
	{
		if(!visited[i])	{
            dfs(i);
			}
	}
	post[u]=stoper, stoper++;
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
	for(int i=1;i<=n;i++)	sort(neighb_wiktor[i].begin(), neighb_wiktor[i].end()); 
    dfs(1);
    for(int i=1;i<=n;i++)
		cout<<pre[i]<<" "<<post[i]<<"\n";
}