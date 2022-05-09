#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define SIZE 250005
int n, x;
vector <int> wiktor[SIZE];
bool vis[SIZE];
int dist[SIZE];
void dfs(int u)
{
    vis[u]=true;
    for(auto i : wiktor[u])
        if(!vis[u]){
            dist[i]=dist[u]+1;
            cout<<dist[i]<<"\n";
            dfs(i);
        }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=2;i<=n;i++){
        cin>>x;
        wiktor[i].push_back(x);
        wiktor[x].push_back(i);
    }
        for(auto i : wiktor[1]) cout<<i<<" ";
}