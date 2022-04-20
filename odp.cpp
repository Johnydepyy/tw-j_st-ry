#include <iostream>
using namespace std;
int main (){
	string odp;
	for(;;)
	{
	cin>> odp;
	if(odp == "(a+b)^2")
		cout<<" a^2 + 2ab + b^2";
	if(odp == "(a-b)^2")
		cout<<" a^2 - 2ab + b^2";
	if(odp == "a^2-b^2")
		cout<<" (a - b)(a + b)";
	if(odp == "(a+b)^3")
		cout<<"a^3 + 3a^2b + 3ab^2 + b^3";
	if(odp == "(a-b)^3")
		cout<<"a^3 - 3a^2b + 3ab^2 - b^3";
	if(odp == "a^3-b^3")
		cout<<"(a-b)(a^2+2ab+b^2)";
	if(odp == "a^3+b^3")
		cout<<"(a+b)(a^2+2ab+b^2)";
	}
}