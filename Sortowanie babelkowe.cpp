#include<iostream>                                     
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
	for(int i=0;i<n-1; i++)
	{
		bool posortowane = true;
		for(int j = 1; j < n - i ; j++)
		{
			if(a[j-1]>a[j])
			{
				swap(a[j-1], a[j]);  //sortwanie bąbelkowe
				posortowane = false;
			}
		}
		if(posortowane)
		{
			break;
		}		
		for(int k=0; k<n; k++)
		{
			cout<<a[k]<<" ";
		}
		cout<<"\n"; // wypisywanie kolejnych iteracji		
	}
	return 0;
}