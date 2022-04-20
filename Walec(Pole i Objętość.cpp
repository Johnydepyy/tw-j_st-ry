#include <iostream>
#include <cmath>


using namespace std;
int main () 
{
	int r,h;
	std::cin>>r>>h;
	if(r < 0 and h<0)
		return 0;
	int pole = 2*3.14159265358979323846*r*(r+h);
	std::cout<<pole<<endl;
	int objetosc = 3.14159265358979323846*r*r*h;
	std::cout<<objetosc<<endl;
	
	
}