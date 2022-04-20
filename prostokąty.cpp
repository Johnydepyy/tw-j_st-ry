#include <iostream>
using namespace std;
int n,m;
int main ()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
		{
			cout<<"#";
		}
	cout<<" ";
	for(int i=0; i<m; i++)
		{
			cout<<"#";
		}
	cout<<"\n";
	for(int i=0; i<n-2; i++)
		{
			cout<<"#";
			for(int k=0; k<n-2; k++)
				{
					cout<<" ";
				}
			cout<<"# #";
			for(int j=0; j<m-2; j++ )
				{
					cout<<" ";
				}
			cout<<"#\n";
		}
	for(int i=0; i<n; i++)
		{
			cout<<"#";
		}
	cout<<" ";
	for(int i=0; i<m; i++)
		{
			cout<<"#";
		}


}
