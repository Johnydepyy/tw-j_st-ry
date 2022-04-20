#include <bits/stdc++.h>
using namespace std;
long long n,N;
bool pierwsza (long long  n)
{
    if(n < 2)
        return false;
    for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0 )
                return false;
        }
    return true;
}
long long j;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>j;
    for(int k=1; k<=j; k++)
        {
            cin >>n;
            N=n;
            long long r = sqrt(sqrt(n));
            if(r*r*r*r == n )
                {
                    if(pierwsza (r))
                        {
                            cout<<"TAK\n";
                        }
                    else
                        {
                            cout<<"NIE\n";
                        }
                }
            else
                {
                    cout<<"NIE\n";
                }
        }
}