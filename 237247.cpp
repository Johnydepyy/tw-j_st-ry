#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1e6+1000;
int n, m, b, x, y, k, stoper=1;
vector <pair <int, int> > wiktor;
vector <pair<int, int > > res;
vector <int> neighb_wiktor[SIZE];
queue <int> queq;
bool visited[SIZE];
int pre[SIZE];
int post[SIZE];
void dfs(int u) {
	visited[u]=true;
	pre[u]=stoper, stoper++;
	for(auto i : neighb_wiktor[u]) {
		if(!visited[i])	{
			dfs(i);
		}
	}
	post[u]=stoper, stoper++;
}
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n>>m;
	for(int i=1; i<=m; i++)
		cin>>x>>y, wiktor.push_back({x, y});
	for(int i=0; i<n-1; i++) {
		neighb_wiktor[wiktor[i].first].push_back(wiktor[i].second);
		
	}
	cin>>k;
	for(int i=0; i<k; i++)   cin>>x>>y, res.push_back({x, y});
	for(int i=1; i<=n; i++)	sort(neighb_wiktor[i].begin(), neighb_wiktor[i].end());
	dfs(1);
	//for(int i=1;i<=n;i++)   cout<<i<<" = "<<pre[i]<<" "<<post[i]<<"\n";
	for(auto i : res)
	{	
		if( i.first != i.second and i.first!=0 and i.second!=0)
			if(pre[i.first] <= pre[i.second] and post[i.first] >= post[i.second])	cout<<"TAK\n";
			else																		cout<<"NIE\n";
		else 				cout<<"NIE\n";
		}
}
