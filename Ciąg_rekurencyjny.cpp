#include <bits/stdc++.h>
using namespace std;
long long const SIZE=1e9;
long long n, x, res;
int rek(long long z)
{   
    if(z==1)   return cout<<res<<" "<<x, 0;
    if(z==0)    res+=3;
    if(z%7==0) 
    { 
        res+=n,  x++;
        return rek(2*(6/7)*n);
    }
    if(z%7!=0)  
    {
        res+=n,x++;
        return rek(((n-1)*(n-1)) % 1000007);
    }
}
int main ()
{
    cin>>n;
    rek(0);
}