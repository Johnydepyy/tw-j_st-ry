#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#define MAX 1000005
#define LOGN 20

using namespace std;

vector<int> V[MAX];
int P[LOGN][MAX], pre[MAX], treeSize[MAX];
bool vis[MAX];
vector <pair <int , int > > Q;
int n, from, to, counter=0, k;

bool children(int u, int v)
{
        return (pre[u]>=pre[v] && pre[u] < pre[v]+treeSize[v]);
}

int lca(int u, int v)
{
        if(children(u, v)) return v;
        if(children(v, u))return u;

        int i=u, j=LOGN-1;
        while(j>=0) {
                if(children(v, P[j][i]))
                        j--;
                else
                        i = P[j][i];
        }
        return P[0][i];
}

void dfs(int v)
{
        counter++;
        pre[v]=counter;
        for(auto i:V[v]){
                if(!vis[i]) {
                        P[0][i]=v;
                        vis[i]=true;
                        dfs(i);
                }
        }
        treeSize[v]=counter+1-pre[v];
}

int main()
{
        cin>>n>>k;
        for(int i = 0; i < n-1; ++i) {
                cin>>from>>to;
                V[from].push_back(to);
                V[to].push_back(from);
        }
        for(int i=1;i<=k;i++)   cin>>from>>to, Q.push_back({from, to});
        for(int i = 0; i <= n; i++) {
                pre[i]=0;
                treeSize[i]=0;
                vis[i]=false;
        }
    for(int i = 0; i < LOGN; i++)
        for(int j = 0; j < MAX; j++)
            P[i][j]=0;

        vis[1]=true;
        dfs(1);

        P[0][1]=1;
        for(int i = 1; i < LOGN; i++)
                for(int j = 1; j < MAX; j++)
                        P[i][j]=P[i-1][P[i-1][j]];
        for(auto i : Q)
        printf("%d\n",lca(i.first, i.second));
        return 0;
}