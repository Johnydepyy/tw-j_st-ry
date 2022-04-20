#include <iostream>
#include <vector>
using namespace std;
vector <int> tab[1000];
int n, tablica[6338690307];
int main ()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tablica[i];
		tab[tablica[i]].push_back(i);
	}
}