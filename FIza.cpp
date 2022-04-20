#include <iostream>
using namespace std;
int main ()
{
	for(;;)
	{
	
	string n;
	cin>>n;
	if(n == "H")
		cout<<"1/2 * gt^2"<<endl;
	if(n == "x")
		cout<<"V0 * t"<<endl;
	if(n == "y")
		cout<<"H - 1/2 * gt^2"<<endl;
	if(n == "t")
		cout<<"Pierwiastke z 2H/g"<<endl;
	if(n == "Vy")
		cout<<"g * t ";
	}
}