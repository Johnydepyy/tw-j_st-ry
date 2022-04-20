#include <iostream>
using namespace std;
int jednosci, miliony, tysiace, n;
bool czy_jest=false;
string setki[10] = {"", "sto", "dwiescie", "trzysta", "czterysta", "piecset", "szescset", "siedemset","osiemset","dziewiecset"};
string dziesiatki[10] = {"", "dziesiec", "dwadziescia", "trzydziesci", "czterdziesci","piecdziesiat","szescdziesiat","siedemdziesiat", "osiemdziesiat","dziewiecdziesiat"};
string jednoscii[10] = {"", "jeden","dwa","trzy", "cztery","piec","szesc","siedem","osiem","dziewiec"};
string nascie[10] = {"jedenascie", "dwanascie", "trzynascie","czternascie","pietnascie","szesnascie","siedemnascie","osiemnascie","dziewientnascie"};
void milion(int n, int miliony)
    {
    miliony = n/1000000;
    if(miliony == 0)
    break;
    string po;
    if(miliony == 1)
        {
        cout<<"milion";
        }
    if(miliony % 10 >= 2 and miliony % 10 <= 4)
        {
        po = "miliony";
        int dziesiatek = (miliony%100)/10;
        int jednosi = miliony % 10;
        string wynik = dziesiatki[dziesiatek] + jednoscii[jednosi] +" "+po+ " ";
        cout<<wynik;
        }
    else
        {
        po = "milionow";
        int dziesiatek = (miliony%100)/10;
        int jednosi = miliony % 10;
        string wynik = dziesiatki[dziesiatek] + jednoscii[jednosi] +" "+po+ " ";
        cout<<wynik;
        }
    if(11<=miliony and miliony <= 19)
        {
        cout<<nascie[miliony - 11]<<" ";
        }
    }
void tysiac(int n, int tysiace)
    {
    int setek,dziesiatek,jednosi;
    tysiace = (n % 1000000) / 1000;
    if(tysiace == 0)
    break;
    string po;
    if(tysiace == 1)
        {
        cout<<"tysiac";
        }
    if(tysiace & 10 >= 2 and tysiace % 10 <= 4)
        {


        po = "tysiace";
        setek = tysiace / 100;
        dziesiatek = (tysiace % 100)/10;
        jednosi = tysiace % 10;
        string wynik = setki[setek] + " "+ dziesiatki[dziesiatek] + jednoscii[jednosi] +" "+ po + " ";
        cout<<wynik;
        }    else
        {
        po = "tysiecy";
        setek = tysiace / 100;
        dziesiatek = (tysiace % 100)/10;
        jednosi = tysiace % 10;
        string wynik = setki[setek] + " "+ dziesiatki[dziesiatek] + jednoscii[jednosi] +" "+ po + " ";
        cout<<wynik;
        }
    if(tysiace >= 11 and tysiace <= 19)
        {
        cout<<nascie[tysiace -11]<<"tysiecy"<<" ";
        }

    }
void Jednosci(int n, int jednosci)
    {
    jednosci = n % 1000;
    int setek = jednosci /100;
    int dziesiatek = (jednosci%100)/10;
    int jednosi = jednosci % 10;
    string wynik = setki[setek] +" "+ dziesiatki[dziesiatek] + jednoscii[jednosi]+ " ";
    cout<<wynik;
    }
void nasciee(int n)
    {
    if(n >= 11 and n<=19)
        {

        cout<<nascie[n - 11]<<" ";
        }
    else
        {
        milion(n,miliony);
        tysiac(n,tysiace);
        Jednosci(n,jednosci);
        }
    }
int main ()
    {
    cin>>n;
    nasciee(n);
    }