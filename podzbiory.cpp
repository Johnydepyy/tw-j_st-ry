#include <bits/stdc++.h>
using namespace std;
long long x, y, n, a, i, res=1;
vector <int> V;
void rek(int x)
{
    if(x!=1)
        {
            for(auto i : V )
                cout<<i<<" ";
            cout<<"\n";
        }
    for(int i=x; i<=n; i++)
        {
            V.push_back(i);
            rek(i+1);
            V.pop_back();
        }
}
int main ()
{
    cin>>n;
    rek(1);,
}