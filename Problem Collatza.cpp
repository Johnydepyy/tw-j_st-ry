#include <bits/stdc++.h>
using namespace std;
long long x, y, z, a,i, res=1;
int funkcja(int x)
{
    if(x!=1)
        {
            if(x%2==0)	return funkcja(x/2);
            else		return funkcja(3*x+1);
            res++;
        }
    else
        {
            return res;
        }
}
int main ()
{
    cin>>x, y=x;
    while(x!=1)
        {
            if(x%2==0)	x=x/2;
            else		x = 3*x+1;
            res++;
        }
    cout<<" Pierwsze = "<<res<<"\n";
    cout<<"Drugie = "<<funkcja(y);
}