#include <iostream>
using namespace std;
int main ()
{
	int n,m;
	cin>>n>>m;
	while(n!=m)
	{
		if(n > m)
		{
			n = n - m;
		}
		else
		{
			m = m -n;
		}
	}
	if(n == 0)
	{
		cout<<m;
	}
	else
	{
		cout<<n;
	}
}