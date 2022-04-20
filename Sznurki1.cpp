#include <bits/stdc++.h>
using namespace std;
int n,x,y,wynik=1;
pair <int, int> tab[1000001];
int main () {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>x>>y, tab[i] = {x, y};
	}
	sort(tab+1, tab+n+1);
	for(int i=1; i<=n; i++) {
		if(tab[i] > tab[i+1])
			wynik++;
	}
	if(wynik >= n) cout<<n;
	else		cout<<wynik;
}