#include <iostream>
#include <vector>
using namespace std;
int n,m;
vector <int>worki[100005];
int przedmioty[100005];
int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>przedmioty[i];
		worki[przedmioty[i]].push_back(i);
		
	}
	for(int j=1;j<=m;j++)
	{
		for(int i=0;i<worki[j].size();i++)
		{
			cout<<worki[j][i]<<" ";
		}
		cout<<"\n";
	}
	
}