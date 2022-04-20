#include <bits/stdc++.h>
using namespace std;
long long const SIZE=5*1e5;
int n, m, b, a,j=0;
int d;
vector <pair <int, int> > wiktor;
vector <int> neighb_wiktor[SIZE];
int res[SIZE];
queue <int> queq;
bool visited[SIZE];
int st[SIZE];
int Q[SIZE];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>n>>m, j=0;
    for(int i=0;i<m;i++)
        cin>>a>>b, st[b]++, neighb_wiktor[a].push_back(b);
    for(int i=0;i<n;i++)	cin>>Q[i];
    //for(int i=0;i<m-1;i++)	sort(neighb_wiktor[i].begin(), neighb_wiktor[i].end());
    for(int i=0;i<n;i++)   
        if(st[i]==0 && d==0)    queq.push(i), d=1;
    d=0;
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
    for(int i=0;i<n;i++) 
    	if(Q[i]!=res[i])    return cout<<Q[i] , 0;
    cout<<"OK";
}