#include <bits/stdc++.h>
using namespace std;
int END=100000, n, R;
int tab[100001], DP[1000001];
int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>tab[i];
	cin>>R;
	for(int i=1;i<=R;i++)
		DP[i]=END;
	DP[0]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<R;j++)
		{
			if(DP[j]!=END)
			{
				int value=j+tab[i];
				int size=DP[j]+1;
				if(value <= R && size < DP[value])
				DP[value]=size;
			}
		}
	}
	if(DP[R]==END)	cout<<"NIE\n";
	else			cout<<DP[R]<<endl;
	return 0;
	
}