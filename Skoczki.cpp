#include <bits/stdc++.h>
using namespace std;
long long  const SIZE=1000005;
long long k;
long long n, N, suma, x;
long long tab[SIZE];
vector <long long> wiktor;


int main ()
{
	cin>>n>>k, N=n;
	if(k==1){
		for(int i=1;i<=n;i++)	
			cout<<i<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++)	tab[i]=i;
	for(int i=2;i<=n;i++)
	{
		long long  ilo=1;
		if(k%i==0)
		{
			while((k%i)==0)
			{
				k/=i, ilo*=i;
			}
			wiktor.push_back(ilo), suma+=ilo, x++;
		}
	}
	sort(wiktor.begin(), wiktor.end());
	if(k>1 || suma>n)	return cout<<"NIE", 0;
	//for(auto i: wiktor)	cout<<"DZIELNIKI = "<<i<<endl;
	n-=wiktor[x-1]-1;
	for(int i=N;i>=1 && x>=1;i--)
	{
		//cout<<"STARY WJECHAŁ \n";
		//cout<<"i=" <<i<<" n=" <<n <<"\n";
		if(i==n)
		{
			for(int b=i+1;b<=i+wiktor[x-1]-1;b++)
				swap(tab[b], tab[b-1]);//, cout<<"swap(" <<tab[b] <<" " <<tab[b-1] <<")\n";
			x--;
			n-=wiktor[x-1];
		}
	}
	for(int i=1;i<=N;i++)
		cout<<tab[i]<<" ";
}
