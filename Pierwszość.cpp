#include <iostream>
using namespace std;
int k,i=0,czyjest;
int main ()
{
	cin>>k;
	while(i < k)
	{
		for(i=2;i<k;i++)
		{
			if(k%i==0)
			cout<<"Nie";
			return 0;
		}
	}
	czyjest ++;
	
}