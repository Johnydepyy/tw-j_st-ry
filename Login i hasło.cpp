#include <iostream>
using namespace std;
int main ()
{
	string haslo, proba;
	string login, login_proba, ktory;
	cin>>ktory;
	for(int i=0; i<5; i++)
	{
		if(ktory == "1")
		{



			login = "admin";
			haslo = "XD";
			cin>>login_proba;
			if(login == login_proba)
			{
				cin>>proba;
				if(haslo == proba)
				{

					cout<<"Przyznano dostep"<<endl;
					break;
				}
				else
				{
					cout<<"zle haslo";
				}
			}
			else
			{
				cout<<"zly login";
			}

			break;
		}
		if(ktory == "2")
		{
			
			
				login = "pasozyt";
				haslo = "password";
				cin>>login_proba;
				if(login == login_proba)
				{
					cin>>proba;
					if(haslo == proba)
					{

						cout<<"Przyznano dostep"<<endl;
						break;
					}
					else
					{
						cout<<"zle hasło";
					}
				}
				else
				{
					cout<<"zly login";
				}
			break;
		}
		if(ktory == "3")
		{
			
				login = "Jan";
				haslo = "haslo";
				cin>>login_proba;
				if(login == login_proba)
				{
					cin>>proba;
					if(haslo == proba)
					{

						cout<<"Przyznano dostep"<<endl;
						break;
					}
					else
					{
						cout<<"zle hasło";
					}
				}
				else
				{
					cout<<"zly login";
				}
			break;
		}
	}
	cout<<"Witaj";


	return 0;

}