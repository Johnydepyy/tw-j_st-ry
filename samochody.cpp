#include <iostream>
using namespace std;
long long n,jeden,zero,atu;
int a[1000005];
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>atu;
		if(atu == 0)
		{
			jeden = jeden+1;
		}
		if(atu == 1)
		{
			zero += jeden;
		}
	}
	cout<<zero;

}