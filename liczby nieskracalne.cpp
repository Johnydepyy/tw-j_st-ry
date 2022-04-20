#include <bits/stdc++.h>
using namespace std;
long long n,N,wynik=1;
long long x;
bool pierwsza(long long n)
{
    if(n<2)
        return false;
    for(long long i=2; i*i<=n; i++)
        {
            if(n%i==0)
                return false;
        }
    return true;
}

int main ()
{
    cin>>n, N=n;
    if(pierwsza(n))
        {
            cout<<n-1;
            return 0;
        }
    for(long long i=2; i*i<=N; i++)
        {

            int ile=0;
            while(n%i==0)
                {
                    n/=i,ile++;
                }
            if(ile!=0)
                {
                     x = pow(i, ile);
                    if(x == N)
                        {
                            cout<<(N*(i-1))/i;
                            return 0;
                        }
                    wynik *= (i-1);
                }
        }
    if(n != 1)
        {
            wynik = wynik*(n-1);
            //cout<<"WYNIK = "<<wynik;
        }
    cout<<wynik;
}
