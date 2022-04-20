#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1e6+10001;
long long END=1e6;
int n, m, b, a, r, t=1;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
queue <int> queq;
bool visited[SIZE];
int st[SIZE];
int Q[SIZE];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>a>>b, st[b]++, neighb_wiktor[a].push_back(b);
    for(int i=1;i<=n; i++)    cin>>Q[i];
    for(int i=1;i<=n;i++){  
        if(st[Q[i]]==0)
        {
            for(auto j : neighb_wiktor[Q[i]])
                st[j]--;
        }
        else    return cout<<Q[i] , 0;
    }
    cout<<"OK";
}