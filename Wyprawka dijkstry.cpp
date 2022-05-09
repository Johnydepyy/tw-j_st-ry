#include <bits/stdc++.h>
using namespace std;
long long const SIZE = 5 * 1e5;
long long END = 1e6;
long long n, m, res, a, k, d, y;
char x;
set <pair<int,int>> secik;
long long arr[SIZE];
bool vis[SIZE];
int dist[SIZE];
int Q[SIZE];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>d, secik.insert({d, i});
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x;
        if(x == 'R')   
        if(x =='M'){
            k++;
            if(!vis[*secik.end()])   vis[*secik.end()]=true;
        }
    }
}