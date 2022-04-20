#include <iostream>
using namespace std;
int n,l,_i=0;
char robaki[1000006];
int main ()
{
	cin>>n>>l;
	for(int i=1;i<=n*2;i++)
	{
		cin>>robaki[i];
	}
	//for(int i=1;i<=n*2;i++)
	//{
		//cout<<robaki[i];
	//}
	for(int i=1;robaki[1] < l;i++)
	{
		robaki[1]++;
		_i++;
	}
	cout<<_i;
}