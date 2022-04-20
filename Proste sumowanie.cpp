#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long d,p,q,maksiu,a,b, mmm, suma;
vector <long long> tab;

int main()
{

    std::ios_base::sync_with_stdio(0);
    mmm=1000000033;
    cin>>d>>p>>q;
    maksiu=11;
    for(long long i=0; i<=11; i++)	tab.push_back(0);
    for(long long i=1; i<=q; i++)
        {
            cin>>a>>b;
            for(long long i=maksiu; i<=b+10; i++)	tab.push_back(0)  , tab[i]=((tab[i-1]*tab[i-1])%mmm + ((tab[i-2]+tab[i-3])*(tab[i-2]+tab[i-3]))%mmm + (tab[i-4]*tab[i-5])%mmm + (p*p)%mmm + i-10)%mmm ;
            for(long long i=a+10; i<=b+10; i++)	suma+=tab[i];
            maksiu=b+10, cout<<suma<<"\n", suma=0;
      }
}

