#include <iostream>
using namespace std;
int n,nr=0;
int tab[1000005];

int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>nr;
		tab[nr]++;
	}
	//for(int i=0;i<30;i++)
	//{
		//cout<<i<<" "<<tab[i]<<endl;
	//}
	for(int i=1;i<=1000;i++)
	{
		if(tab[i]%2 != 0 ) 
		cout<<i<<" ";		
	}
}