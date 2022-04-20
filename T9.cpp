#include <iostream>
using namespace std;
string wyraz;
int n;
int main ()
{
	ios_base::sync_with_stdio(false);
	cin.tie();
	cin>>wyraz;
	n = wyraz.length();
	for(int i=0; i<n; i++)
	{
		if(wyraz[i] == 'a' or wyraz[i] == 'b' or wyraz[i] == 'c')
			cout<<"2";
		else if (wyraz[i] == 'd' or wyraz[i] == 'e' or wyraz[i] == 'f')
			cout<<"3";
		else if(wyraz[i] == 'h' or wyraz[i] == 'g' or wyraz[i] == 'i')
			cout<<"4";
		else if(wyraz[i] == 'j' or wyraz[i] == 'k' or wyraz[i] == 'l')
			cout<<"5";
		else if(wyraz[i] == 'm' or wyraz[i] == 'n' or wyraz[i] == 'o')
			cout<<"6";
		else if(wyraz[i] == 'p' or wyraz[i] == 'q' or wyraz[i] == 'r' or wyraz[i] == 's')
			cout<<"7";
		else if(wyraz[i] == 't' or wyraz[i] == 'u' or wyraz[i] == 'v')
			cout<<"8";
		else if(wyraz[i] == 'w' or wyraz[i] == 'x' or wyraz[i] == 'y' or wyraz[i] == 'z')
			cout<<"9";
	}

}