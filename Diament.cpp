#include <iostream>
using namespace std;
int n;
int main ()
{
	cin>>n;
	if(n <= 3 and n >= 1000)
		return 0;
	else
	{

		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if((i*j) %2 == 0)
					cout<<"#";
				else
					cout<<".";
			}
			cout<<endl;
		}
	}

}