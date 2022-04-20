#include <iostream>
using namespace std;
int a,b;
int main ()
{
	cin>>a>>b;
	if(a%2 ==0 or b%2 == 0)
		cout<<"0\n";
	else if(a>b)
		cout<<b<<endl;
	else
		cout<<a<<endl;
	if(a == 1 and b == 1)
		cout<<"1";
	else if(a%2 != 0 and b%2 != 0 and a==b)
		cout<<"4";
	else if(a%2 == 0 and b%2 == 0 or b%2!=0 and a%2!= 0 )
		cout<<"2";
	else if(a%2 !=0 and b%2 == 0 or b%2!=0 and a%2==0)	
		cout<<"1";
}