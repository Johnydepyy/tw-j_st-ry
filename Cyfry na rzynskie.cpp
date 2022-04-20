#include <iostream>
using namespace std;
	int n;
	void pot_wartosc(int  oile, string slowo)
	{	
		while(n >= oile)
		{	n -= oile;
			cout<<slowo;
		}
	}
	int main ()
	{	
		ios_base::sync_with_stdio(0);
		cin>>n;
		pot_wartosc(1000,"M");
		pot_wartosc(900,"CM");
		pot_wartosc(500,"D");
		pot_wartosc(400,"CD");
		pot_wartosc(100,"C");
		pot_wartosc(90,"XC");
		pot_wartosc(50,"L");
		pot_wartosc(40,"XL");
		pot_wartosc(10,"X");
		pot_wartosc(9,"IX");
		pot_wartosc(5,"V");
		pot_wartosc(4,"IV");
		pot_wartosc(1,"I");
	}

