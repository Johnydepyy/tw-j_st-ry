#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int SIZE=100001;
typedef long long ll;
int  x=0, y, k, n, high, low, srd;
ll tab[SIZE];
ll DP[SIZE];
int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>tab[i];
	cin>>k;
	for(int i=1;i<=n;i++)
	{
		if(k%tab[i]!=0)
		{
			x = k%tab[i];
			for(int j=1;j<=n;j++)
				if(x%tab[j]!=0)	y++;
		}else 	return cout<<"TAK\n", 0;
	}
	if( y >= n*n)	cout<<"NIE";
	else		cout<<"TAK";
	return 0;
}