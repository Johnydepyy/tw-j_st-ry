#include <bits/stdc++.h>
using namespace std;
long long n,k,N=0;
int main ()
{
	ios_base::sync_with_stdio(0);
    cin>>n;
    k = (n/30)*16;
    N = n%30;
    for(long long i=1; i<=N; i++)
        {
            if(i%3==0 or i%2 == 0)
                {
                    if(i%5!=0)
                        k++;
                }
                
        }
      cout<<k;
	
    
}