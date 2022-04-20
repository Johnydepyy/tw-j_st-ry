#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
long long END=1e6;
int n, m, b, a,j=1, r, d;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
int res[SIZE];
queue <int> queq;
bool visited[SIZE];
int st[SIZE];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>r;
	for(int y=1;y<=r;y++)
	{
    cin>>n>>m, j=1;
    for(int i=1;i<=m;i++)
        cin>>a>>b, st[b]++, neighb_wiktor[a].push_back(b);
    //for(int i=1;i<=n;i++)   sort(neighb_wiktor[i].begin(), neighb_wiktor[i].end());
    for(int i=1;i<=n;i++)   
        if(st[i]==0)    queq.push(i);
    for(int i=1;i<=n;i++)   res[i]=END;
    while(!queq.empty())
    {
        int u = queq.front();
        queq.pop();
        res[j]=u;
        for(auto i : neighb_wiktor[u]){
            st[i]--;
            if(st[i]==0)    queq.push(i);
        }
        j++;
    }
    for(int i=1;i<=n;i++)   
        if(res[i]==END)     d++;
    if(d <= n+1 && d > 0 && n!=0)	cout<<"TAK\n";
	else				cout<<"NIE\n";
	d=0; 
	for(int i=1;i<=n;i++)	st[i]=0;
	for(int i=1;i<=m;i++)	neighb_wiktor[i].clear();

	}
}