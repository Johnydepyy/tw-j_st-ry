#include <iostream>
using namespace std;
string szyfr;

int main ()
{	
	cin>>szyfr;
	
	for(int i=0;i<szyfr.length(); i++)
		if((szyfr[i]>= '0') && (szyfr[i] <= '9'))
			cout<<szyfr[i];
	else{
		char n ='A';
		if((szyfr[i] >= 'a') && (szyfr[i] <= 'z')) n = 'a';
		{
			int a = szyfr[i] - n;
			a = (a + 13)%26;
			char wypisuj = n + a;
			cout<<wypisuj;
		}
	}
	
}