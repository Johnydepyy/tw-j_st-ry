#include <bits/stdc++.h>
using namespace std;
long long n, k;
int tab[100004];
char x;
vector <int> s;
auto main () -> int32_t
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>k;
		if(x == '-') s.pop_back(k);
		else		s.push_back(k);
		if(s.size()==1)	cout<<"NIE\n";
		else			cout<<max(s[i], s[i-1]) - min(s[i], s[i-1];
	}
}