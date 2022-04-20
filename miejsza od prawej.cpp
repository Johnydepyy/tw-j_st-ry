#include <bits/stdc++.h>
using namespace std;
long long tab[1000001];
long long tab2[1000001];
long long n,m=1000000000;
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>tab[i];
	}
	for(long long i=n;i>0;i--)
	{		
		if(tab[i]<=m)
			m = tab[i];
		tab2[i] = m;
		
	}
	for(int i=1; i<=n; i++){
		cout<<tab2[i]<<" ";
	}
}