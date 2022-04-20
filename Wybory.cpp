#include <bits/stdc++.h>
using namespace std ;
pair <int, int> s[100001];
long long tab1[100001];
long long END=10e9;
int suma, part, q=1, res ,n, x, i=1;
long long DP[1100001];
long long ans[2002];
int main ()
{
a	cin>>n, DP[0]=0;
	for(int i=1;i<=n;i++)	cin>>s[i].first, s[i].second=i, suma+=s[i].first, tab1[i]=s[i].first;
	sort(s+1, s+n+1);
	for(int i=1;i<=suma;i++)	DP[i]=END;
	for(int j=n;j>0;j--)
		for(int i=suma/2; i>=0;i--)
		{
			if(DP[i]!=END and DP[i +s[j].first]==END)
				DP[i + s[j].first]=s[j].second;//,cout<<"USTAWIAM \n"<<"DP"<<" [ "<<i<<" + "<<s[j].first<<" ] "<<" = "<<s[j].second<<"\n";
		}
	for(int i=suma;i>=1;i--)
		if(DP[i]!=END){
			cout<<i<<"\n", res=i;
			break;
		}
	//ans[1]=DP[res];
	while(res>0)
	{
		ans[i]=DP[res], res-=tab1[DP[res]], x++, i++;
	}
	cout<<x<<endl;
	for(int i=1;i<=x;i++)	cout<<ans[i]<<" ";
	
}