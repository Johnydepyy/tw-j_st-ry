#include <iostream>
using namespace std;
int n;
int main ()
{
	cin>>n;
	   for(int i=-n; i<=n; i++)
	{
		for(int j=-n; j<=n; j++)
			if(i*i+j*j > n*n)
			{
				cout<<".";
			}
			else
			{
				cout<<"#";
			}
		cout<<"\n";
	}
}