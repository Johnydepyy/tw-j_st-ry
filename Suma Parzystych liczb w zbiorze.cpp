#include <iostream>
using namespace std;
int a, b,  wynik;
int main(){
	cout<<"z jakiego zbioru liczb mam wziać te parzyste i je zsumować\n";
	cout<<"od\n";
	cin>>a;
	cout<<"do\n";
	cin>>b;
	for(int i = a ; i <= b; i++){
		if(i%2 == 0){
			wynik = wynik + i;
		}
	}
	cout<<wynik;
	return 0;
}