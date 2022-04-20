#include <iostream>
using namespace std;

int  NWD(int m1, int m2 ){
	while( m2 != 0){
		int r = m1 % m2;
		m1 = m2;
		m2 = r;
	}
	return m1;
}
int NWW(int m1, int m2 )
{
	return m2 / NWD(m1,m2) *m1;
 }
int main ()
{
	int m1,m2;
	cin>>m1>>m2;
	cout<<NWW(m1, m2);
}