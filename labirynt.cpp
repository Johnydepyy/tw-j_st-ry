#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1100;
long long END=1e5;
long long  n, m, b, x , y, vx, vy, a;
char wiktor[SIZE][SIZE];
queue <pair <long long , long long> > queq;
bool visited[SIZE][SIZE];
long long dist[SIZE][SIZE];
long long  X[]={0, 1, 0, -1};
long long  Y[]={1, 0, -1, 0};
bool inside (int x, int y){if (x>=1 && y>=1 && x<=n && y<=m) return true;
                            else    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>wiktor[i][j];
            if(wiktor[i][j]=='S')   x=i,y=j;
            if(wiktor[i][j]=='M')   a=i, b=j;
        }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dist[i][j]=END;  
    dist[x][y]=0;
    queq.push({x, y});
    while(!queq.empty()) 
    {
        pair <long long, long long> u=queq.front(); 
        queq.pop();
        if(visited[u.first][u.second])  continue;
        visited[u.first][u.second]=true; 
        for(int i=0;i<=3;i++){
            vx =  u.first + X[i], vy =  u.second + Y[i];
            if(inside(vx, vy) && wiktor[vx][vy]!='#' )
            dist[vx][vy]=min(dist[vx][vy], dist[u.first][u.second]+1),queq.push({vx, vy});;
        }
    }
    if(dist[a][b] == END)   cout<<"NIE\n";
    else        cout<<dist[a][b];
}