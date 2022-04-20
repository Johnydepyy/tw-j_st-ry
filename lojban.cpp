#include <iostream>
using namespace std;
int n;
int tab[1000005];
int main ()
{
	cin>>n;
	int s;
	s = n;
	for(int i=1; i<s; i = i*10)
		{
			tab[i] = n%i;
			n = n%i;
			cout<<n;
		}
	for(int i=1; i<s; i= i*10)
		{

			if(tab[i] = 1)
				cout<<"pa";
			else if(tab[i] = 2)
				cout<<"re";
			else if (tab[i] = 3)
				cout<<"ci";
			else if(tab[i] = 4)
				cout<<"vo";
			else if(tab[i] = 5)
				cout<<"mu";
			else if(tab[i] = 6)
				cout<<"xa";
			else if(tab[i] = 7)
				cout<<"ze";
			else if(tab[i] = 8)
				cout<<"bi";
			else if(tab[i] = 9)
				cout<<"so";
			else if(tab[i] = 0)
				cout<<"no";
		}
}