#include <iostream>
using namespace std;
int n,i,j,wynik;
int a[100000];
int main () {
	wynik = 0;
	cin>>n>>i>>j;
	if(1 <= i <= j <= n) {
		for(int b=1; b<=n; b++) {
			cin>>a[b];
		}						
		for(int c = i; c<=j; c++) {
			wynik = wynik + a[c];
		}
		cout<<wynik;
		return 0;
	} else {
		return 0;
	}
}