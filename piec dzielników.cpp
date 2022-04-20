#include<bits/stdc++.h>

using namespace std;
long long n;
int tab[8] = {1, 7, 11,13,17,19,23,29};
int main ()
{
    cin>>n;
    int wynik=0;
    wynik = n/8;
    wynik*=30;
    cout<<tab[n%8]+wynik;
}