#include <bits/stdc++.h>
using namespace std;
long long n, wynik;
const long long SIZE = 1000005;
bool visited[SIZE], b[SIZE];
long long grafy[SIZE];
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        {
            cin>>grafy[i];
            if(b[grafy[i]])	return cout<<"NIE\n", 0;
            else			b[grafy[i]] = 1;
        }
    for(int i=1; i<=n; i++)
        {
            if(visited[i]==0)
                {
                    int u=i;
                    wynik++;
                    while(visited[u]==0)
                        visited[u]=1, u=grafy[u];

                }
        }
    cout<<wynik<<"\n";

}