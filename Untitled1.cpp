#include <iostream>
using namespace std;
int p;
int tab[500005];

int Find(int u){
	if(tab[u]==u){
		return u;
	}
	else tab[u]=Find(tab[u]);
	return tab[u];
}

void Union(int a, int b){
	tab[Find(a)]=Find(b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>p;
	for(int i=1; i<=p;i++){
		tab[i]=i;
	}
	for(int i=1;i<=p;i++){
		int x;
		cin>>x;
		Union(x,x+1);
		int wynik=Find(x);
		if(wynik==0){
			cout<<"NIE\n";
		}else cout<<wynik<<"\n";
	}
	
}