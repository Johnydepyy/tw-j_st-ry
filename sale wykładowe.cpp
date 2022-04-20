#include <bits/stdc++.h>
using namespace std;
int tab[1001];
int tab1[1001];
int wynik, wynik1;

int main ()
{
    for(int i=1; i<=4; i++)
        cin>>tab[i];
    for(int i=1; i<=4; i++)
        cin>>tab1[i];
    sort(tab+1, tab+5);
    sort(tab1+1,tab1+5);
            wynik = tab[1]*tab[4];
            wynik1 = tab1[1]*tab1[4];
    if(wynik > wynik1) cout<<">";
    else
        {
            if(wynik < wynik1)	cout<<"<";
            else				cout<<"=";
        }
}