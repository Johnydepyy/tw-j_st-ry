#include <iostream>
using namespace std;
int a,b,c;
int main ()
{
	cin>>a>>b>>c;			//3, 7 ,2
	if(a > c and a < b or a < c and a > b)
	{
		cout<<"PIERWSZA";
	}
	if(b > a and b < c or b > c and b < a)
	{
		cout<<"DRUGA";
	}
	if(c > a and c < b or c > b and c < a)
	{
		cout<<"TRZECIA";
	}

}