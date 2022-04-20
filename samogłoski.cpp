#include <iostream>
#include <string>
using namespace std;
string wyraz;
int n,samogloski=0;
int main()
{
	cin>>wyraz;
	n = wyraz.length();
	for(int i=0; i<n; i++)
	{
		if(wyraz[i] == 'a' or wyraz[i] =='e' or wyraz[i] =='y' or wyraz[i] =='i' or wyraz[i] =='u' or wyraz[i] =='o')
		{
			samogloski++;
		}
	}
	cout<<samogloski;
}
