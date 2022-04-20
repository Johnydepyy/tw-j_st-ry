#include <iostream>
using namespace std;

int  NWD(long long  a, long long b )
{	while( b != 0)
	{	long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}


int main ()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long  l1,m1,l2,m2, x,y, nwd;
	cin>>l1>>m1>>l2>>m2;
	x = l1*m2 + l2*m1;
	y = m1*m2;
	nwd = NWD(x,y);
	
	cout<<x/nwd<<" "<<y/nwd;
}