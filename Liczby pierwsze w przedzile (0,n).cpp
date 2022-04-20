#include <iostream>
using namespace std;
long long n,k,i,czyjest=0;
void sprawdzanie_pierwszosci(long long k,long long i)
{
	while(i < k)
	{
		for(i=3;i<k;i++)
		{
			if(k%i==0)
			return;
		}
	}
	czyjest++;
}

int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	if(n == 2)
		czyjest++;
	for(k =3 ; k<n;k++)
	{
		sprawdzanie_pierwszosci(k,i);
	}
	cout<<czyjest;
}