#include <iostream>
#include <algorithm>
using namespace std;
pair<long long, long long >pary[100005];
long long n;
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>pary[i].first>>pary[i].second;
	}
	sort(pary, pary + n);
	for(int i=0;i<n;i++)
	{
		cout<<pary[i].first<<" "<<pary[i].second<<" \n";
	}
	
}
