#include <iostream>
using namespace std;
int n;
int main ()
{
	cin>>n;
	for(int i=1; i<=(2*n+1)/4; i++)
	{
		cout<<"### ";
	}
	if(n%2 == 0)
		cout<<"#";
	else
		cout<<"###";
	cout<<"\n";
	cout<<"#";
	for(int i=1; i<=n; i++)
	{
		cout<<" #";
	}
	cout<<endl<<"# ";
	for(int i=1; i<=(2*n-1)/4; i++)
	{
		cout<<"### ";
	}
	if(n%2 == 0)
	{
		cout<<"###";
	}else{
		cout<<"#";
	}
}


