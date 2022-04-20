#include<bits/stdc++.h>
using namespace std;
int n,czyjest=0;
bool a[250000000];
int main ()
{
	
	cin>>n;
	for(int i=2; i<=n; i++)
		{
			if(a[i] == 0)
				{
					for(int j= 2*i; j<=n; j+=i)
						a[j] = 1;
				}

		}
	for(int i=2; i<=n; i++)
		{
			if(a[i] == 0)
			czyjest++;
			}
	cout<<czyjest;
}