#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#define END 1000005
#define pot 20

using namespace std;

vector<int> V[END];
int wierz_pot[pot][END], pre[END], post[END];
bool vis[END];
vector <pair <int , int > > Q;
int n, od, to, counter=0, k;
int dist[END];
bool visited_1[END];
bool children(int u, int v)
{
        return (pre[u]>=pre[v] && pre[u] < post[v]);
}

int lca(int u, int v)
{
        if(children(u, v)) return v;
        if(children(v, u))return u;

        int i=u, j=LOGN-1;
        while(j>=0) {
                if(children(v, wierz_pot[j][i]))
                        j--;
                else
                        i = wierz_pot[j][i];
        }
        return P[0][i];
}

void dfs(int v)
{
        counter++;
        pre[v]=counter;
        for(auto i:V[v]){
                if(!vis[i]) {
                        wierz_pot[0][i]=v;
                        vis[i]=true;
                        dfs(i);
                }
        }
     post[v]=counter+1-pre[v];
}
void gleb(int u)
{
    visited_1[u]=true;
    for(auto i : V[u])
        if(!visited_1[u]) 
            dist[i]=dist[u]+1, gleb(i);
}
int main()
{
        ios_base::sync_with_stdio(0);
	    cin.tie(0), cout.tie(0);
        cin>>n>>k;
        for(int i = 0; i < n-1; ++i) {
                cin>>od>>to;
                V[od].push_back(to);
                V[to].push_back(od);
        }
        for(int i=1;i<=k;i++)   cin>>od>>to, Q.push_back({od, to});
        for(int i = 0; i <= n; i++) {
                pre[i]=0;
                post[i]=0;
                vis[i]=false;
        }
    for(int i = 0; i < pot; i++)
        for(int j = 0; j < END; j++)
            wierz_pot[i][j]=0;

        vis[1]=true;
        dfs(1);

        wierz_pot[0][1]=1;
        for(int i = 1; i < pot; i++)
                for(int j = 1; j < END; j++)
                        wierz_pot[i][j]=wierz_pot[i-1][wierz_pot[i-1][j]];
        for(auto i : Q){
            int t = lca(i.first, i.second);
            gleb(i.first);
            gleb(i.second);
            gleb(t);
            if(dist[i.first]>dist[i.second])    cout<<dist[i.first]-dist[i.second]-2*dist[t]<<"\n";
            else                                cout<<dist[i.second]-dist[i.first]-2*dist[t]<<"\n";
        }
        return 0;
}