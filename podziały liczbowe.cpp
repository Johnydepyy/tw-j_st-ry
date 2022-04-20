#include <bits/stdc++.h>
using namespace std;
long long x, y, z, a, i, res=1;
vector <int> V;
void rek(int x, int mn)
{
	if(x==0){
		for(auto i : V)
			cout<<i<<" ";
		cout<<"\n";
	}
	for(int i=mn;i<x;i++)
	{
		V.push_back(i);
		rek(x-i, i);//, cout<<"POWARZAM KURWO\n";
		V.pop_back();
	}
	
}

int main ()
{
	cin>>x, y=x;
	rek(x, 1);
}