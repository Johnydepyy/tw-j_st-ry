#include <bits/stdc++.h>
using namespace std;
long long n,wynik=1,k=0;
long long  liczba_zer=1;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    if(n<5)
        {
            cout<<"0";
            return 0;
        }
    for(long long i = 1; n >= liczba_zer; i++)
        {
            liczba_zer = pow(5, i);
            k += n/liczba_zer;
        }
    cout<<k;
}