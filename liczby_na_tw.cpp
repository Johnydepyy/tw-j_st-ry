#include <bits/stdc++.h>
using namespace std;
long long const SIZE=10^4;
long long END=10^5;
long long n;
string kod[]={ " ", "a","b","c", "d","e","f","g","h","i","j","k","l","m","n","o","p","r","s","t","u","w","y","z" } ;
int main ()
{
    cin>>n;
    cout<<kod[n/10];
    for(int i=10;i<n;i+=10)    
        cout<<kod[n%i], n/=10;
}