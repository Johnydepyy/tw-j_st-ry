#include<bits/stdc++.h>
using namespace std;
const long long SIZE=1000005;
long long n,r,a;
long long tab[SIZE];
long long kij=0;
int main ()
{
    cin>>n;
    n *= pow(1, 2);
    while(n!=1)
    {
    	if(n%2==0)		cout<<"P";
    	else			cout<<"L";
    	n/=2;
    }

}