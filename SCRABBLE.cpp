#include <iostream>
using namespace std;
string wyraz;
int czyjest=0;
int main ()
{
	cin>>wyraz;
	for(int i=0; i<wyraz.size();i++)
	{
		if(wyraz[i] == wyraz[i+1])
		{
			cout<<wyraz[i]<<wyraz[i-1]<<wyraz[i+1];
		}
		if(wyraz[i-1] == wyraz[i+1])
		{
			cout<<
		}
	}
}