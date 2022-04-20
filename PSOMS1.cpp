#include <bits/stdc++.h>
using namespace std;
long long sum=0, n, m=0,j=1;
long long tab[1000001];
long long tab1[1000001];
int main ()
{
    cin>>n;
    for(long long i=1; i<=n; i++)
        {
            cin>>tab[i];
        }
    	while(n <= n/2)
        {
            for(long long i=1; i<=n; i+=2)
                {
                    tab[i] =tab[i] + tab[i+1];
                    cout<<tab[i]<<"\n";
                    if(tab[i]>m)
                    m = tab[i];
                }
                n=n/2;
                cout<<"SWITCH1\n";
      }
    	//while(n > 1)
        //{
           // for(long long i=1; i<=n; i+=2)
              //  {
                //	cout<<tab[i]<<"+"<<tab[i+1];
                  //  tab[i]+=tab[i+1];
                  //cout<<" = "<<tab[i]<<"\n";
                    //if(tab[i]>m)
                    //m = tab[i];
                //}
                //n/=2;
                //cout<<"SWITCH\n";
      //}
      cout<<m;

}