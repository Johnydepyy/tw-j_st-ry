#include <bits/stdc++.h>
using namespace std;
long long x, y, z, a;
int rek(long long  a, long long  b, long long c)
{
    if(b==0)    return 1;
    if(b%2==1)  return ((a%c)* rek(a, b-1, c)%c)%c;
    long long x = rek(a, b/2, c);
    
    return ((x%c) * (x%c))%c;
}

int main()
{
    cin>>x>>y>>z;
    cout<<rek(x, y, z);
        return 0;
}