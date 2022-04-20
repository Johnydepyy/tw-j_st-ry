#include<iostream>    
#include <algorithm>
                                 
using namespace std;
int n;
int main ()
{
	cin>>n;
	int a[1000];
	for(int i=0; i<n; i++)
	{
		cin>>a[i]; //wczytywanie liczb
	}
	std::sort( a, a+n );
	
	for(int i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
	
	return 0;
}