#include <iostream>
using namespace std;
int n, ile_jest,x,s,p,k;
long long a[1000005];
int zapytas;
long long zapytasy[1000005];
bool sprawdz(int x, int s)
{
	if(x <= a[s])
		return true;
	else
		return false;
}
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1; i<=n; i++)
		{
			cin>>a[i];
		}
	a[0] = 0;
	long long  li;
	li = 10e9 + 1;
	a[n+1]=li;
	cin>>zapytas;
	for(int i=0; i<zapytas; i++)
		{
			cin>>zapytasy[i];
		}
	for(int i=0; i<zapytas; i++)
		{
			p = 0;
			k = n+1;
			x = zapytasy[i];
			while(k != p+1)
				{
					//cout<<"jest w petli"<<" \n";
					s = (p+k)/2;
					if(sprawdz(x,s) == true)
						{

							k=s;
							//cout<<"koniec="<<" "<<k<<"\n";
						}
					else
						{

							p=s;
							//cout<<"poczatek="<<" "<<p<<"\n";
						}
				}
			cout<<n-p<<"\n";
		}

}