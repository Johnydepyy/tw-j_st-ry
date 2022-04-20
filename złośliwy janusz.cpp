#include<bits/stdc++.h>
using namespace std;
const long long SIZE=1000005;
long long n,r,a;
long long tab[SIZE];
long long kij=0;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>r;
    for(int i=0; i<n; i++)
            cin>>a, tab[a%r]++;
    if(tab[0]>=1) kij+=1;
    if(r%2==0) 
        {
            if(tab[r/2]>=1) kij+=1;
            for(int i=1; i<r/2; i++)
                    kij+=max(tab[i],tab[r-i]);
        }
    else for(int i=1; i<=r/2; i++)
                kij+=max(tab[i],tab[r-i]);
    cout<<kij;
}