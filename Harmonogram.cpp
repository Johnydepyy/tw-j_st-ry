#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5;
long long END = 1e5;
int n, m, b, a, j, s, t, x, y, r;
vector<int> wikt_1[SIZE];
vector<int> wikt[SIZE];
vector<pair<int, int>> wiktor;
set<int> queq;
bool visited[SIZE];
bool visited_1[SIZE];
int ans = 0, res = 0;
int st[SIZE];
void dfs_1(int u)
{
	visited[u] = true;
	for (auto i : wikt_1[u])
	{
		if (!visited[i])
		 ans++ ,/* cout<<i<<" = dodaje 1  przed s wiec wynik = "<<ans<<"\n",*/ dfs_1(i);
	}
} 
void dfs_2(int u)
{
	visited[u] = true;
	for (auto i : wikt[u])
	{
		if (!visited[i])
			ans++, /*cout<<i<<" = dodaje 1 po t wiec wynik = "<<ans<<"\n",*/dfs_2(i);
	}
}
int main()
{
	cin >> n >> m >> s >> t;
	ans=2;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y, wikt[x].push_back(y), wikt_1[y].push_back(x);
	}
	//cout<<"WCHODZĘ DO PIERWSZEGO DFS\n";
	dfs_1(s);
	//cout<<"QCHODZE DO DRUGIEGO DFS \n";
	dfs_2(t);
	cout << n - ans ;
}
