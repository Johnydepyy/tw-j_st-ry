#include <bits/stdc++.h>
using namespace std;
long long n;
long long a,b,c, x, y, z;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin>>n;
    int wynik=0;
    cin>>a>>b>>c;

    for(long long i=1; i<n ; i++)
        {
            cin>>x>>y>>z;
            x+= min(b,c);
            y+= min(a,c);
            z+= min(a,b);
            a=x,b=y,c=z;
        }
    cout<<min(x, min(y,z));
}
