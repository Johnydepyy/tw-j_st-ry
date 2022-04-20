#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
long long END=1e5;
int n, m, b, a,j;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
int res[SIZE];
set <int> queq;
bool visited[SIZE];
int st[SIZE];
int d;
int main()
{
    cin>>n>>m, j=1;
    for(int i=1;i<=m;i++)
        cin>>a>>b, st[a]++, neighb_wiktor[b].push_back(a);
    for(int i=1;i<=n;i++)   
        if(st[i]==0)    queq.insert(i);
    for(int i=1;i<=n;i++)   res[i]=END;
    while(!queq.empty())
    {
        int u = *queq.begin();
        queq.erase(u);
        res[j]=u;
        for(auto i : neighb_wiktor[u]){
            st[i]--;
            if(st[i]==0)    queq.insert(i);
        }
        j++;
    }
    for(int i=1;i<=n;i++)   
        if(res[i]==END)     d++;
    for(int i=1;i<=n;i++)
    {
    if(d <= n && d > 0 && n!=0)	 cout<<res[i]<<" "; 
	else				return cout<<"NIE", 0;
    }
    
}