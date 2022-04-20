#include <bits/stdc++.h>
using namespace std;
int n, wynik=0,R,suma;
int tab[100001];
int DP[100001];
int main ()
{
	cin>>n;
	for(int j=1;j<=n;j++)
		cin>>tab[j], suma+=tab[j];
	cin>>R;
	if(suma < R)	return cout<<"-1\n" , 0;
	sort(tab+1, tab+n+1);
	int i = n ;
	while(R>0)
	{
		DP[i]=tab[i]+min(DP[i-1], DP[i-2]);
		wynik=DP[i];
		i--;
	}
	cout<<wynik<<"\n";
}