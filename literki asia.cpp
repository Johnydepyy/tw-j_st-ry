#include <iostream>
using namespace std;
long long n;
string k;
int main ()
{
	cin>>n>>k;
	for(int i=0;i<=k.size();i++)
	{
		if('k[i]' == 'x')
			n++;
	}
	cout<<n;
}