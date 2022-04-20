#include <bits/stdc++.h>
using namespace std;
long long n,N,i;
int wynik;

int main ()
{
    cin>>n,N=n;
    if(n%2 ==0 && n!=2 && n!=3 && n!=1)	cout<<"3";
    else
        {
            if(n%2 !=0 && n!=2 && n!=3 && n!=1)
                cout<<"4";
        }
    if(n == 3)			cout<<"3";
    if(n == 2)			cout<<"2";
    if(n==1)			cout<<"1";
}