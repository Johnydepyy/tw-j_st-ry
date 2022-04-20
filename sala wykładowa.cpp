#include <iostream>
#include <algorithm>
using namespace std;
int tab1[5];
int tab2[5];
long long suma1, suma2;
int main()
{

for (int i=0; i < 4; i++){
    cin >> tab1[i];
    suma1 = suma1 + tab1[i];
}
for (int i=0; i < 4; i++){
    cin >> tab2[i];
    suma2 = suma2 + tab2[i];
}
sort(tab1, tab1 + 5);
sort(tab2, tab2 + 5);

if (tab1[1] == tab1[2] and 
    tab1[3] == tab1[4] and 
    tab2[1] == tab2[2] and
    tab2[3] == tab2[4]){

    if (suma1 < suma2){
        cout << "<";
    }
    else if (suma1 > suma2){
        cout << ">";
    }
    else if (suma1 == suma2){
        cout << "=";
    }
    return 0;       
    
} else {
    return 0;
}


}