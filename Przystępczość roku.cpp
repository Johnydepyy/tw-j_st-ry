#include <iostream>
using namespace std;
int rok;
int main()
{
	cin>>rok;
	if (rok % 4 == 0){
		if (rok%100 == 0)
			{
			if (rok	% 400 != 0)
				cout<<"NIE";
			else
				cout<<"TAK";
			} else {
				cout<<"TAK\n";
			}
			
	} else {
		cout<<"NIE\n";
	}
			
	return 0;
}
		