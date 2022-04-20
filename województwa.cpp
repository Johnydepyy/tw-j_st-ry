#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long a[500005];
long long  a_s[500005];
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++)
		{
			cin>>a[i];
			a_s[i] = a[i];
		}

	sort(a_s+1, a_s+n);
	//for(int i=0;i<n;i++)
	//{
		//cout<<a[i];
	//}
	//cout<<"\n";
	int sciana=0;
	long long suma=0;
	for(int i=1; i<=n; i++)
		{
			suma += a_s[i];
			long long li = 1e18 + 5;
			if(suma > li)
			{
				suma = li;
			}
			if(suma<a_s[i+1])
			sciana = i+1;
		}
			for(int i=1; i<=n; i++)
				{
					if(a[i] >= a_s[sciana])
						cout<<i<<" ";
				}
		
}