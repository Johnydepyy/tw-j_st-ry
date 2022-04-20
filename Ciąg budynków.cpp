#include <iostream>
using namespace std;

int t[100005];
int main ()
{
	int n, m=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
		if(t[i]>m)
			m = t[i];	
	}
	int highmax = m;
	for(int i=1;i<=highmax;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(t[j]>=m)
				cout<<"#";
			else
				cout<<".";
		}
		cout<<"\n";
		m--;
	}
}