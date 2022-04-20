#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
    {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string dalej;
    string text[1000];
    string number;
    int ilosc_tekstu, ilosc_cyfr;
    int cyfry[1000];
    string haslo, proba;
    string login, login_proba, ktory;
    cin>>ktory;
    for(int i=0; i<5; i++)
        {
        if(ktory == "1")
            {



            login = "admin";
            haslo = "XD";
            cin>>login_proba;
            if(login == login_proba)
                {
                cin>>proba;
                if(haslo == proba)
                    {

                    cout<<"Przyznano dostep"<<endl;
                    break;
                    }
                else
                    {
                    cout<<"zle haslo";
                    }
                }
            else
                {
                cout<<"zly login";
                }

            break;
            }
        for(;;)
            {

            cout<<"Co dalej"<<endl;
            cin>>dalej;
            if(dalej =="text")
                {
                cout<<"Ile slow"<<endl;
                cin>>ilosc_tekstu;
                cout<<"Wpisz te slowa"<<endl;
                for(int i=0; i<ilosc_tekstu; i++)
                    {
                    cin>>text[i];
                    }

                cout<<"Co mam z tym zrobić?"<<"\n";;
                cin>>number;
                if(number == "2")
                    {
                    for(int i=ilosc_tekstu; i>=0; i--)
                        {
                        cout<<text[i];
                        }
                    }
                }


            if(dalej == "Liczby")
                {
                cout<<"Ile cyfr"<<endl;
                cin>>ilosc_cyfr;
                cout<<"Wypisz te cyfry"<<endl;
                for(int i=0; i<ilosc_cyfr; i++)
                    {
                    cin>>cyfry[i];
                    }
                cout<<"Co mam z tym zrobic"<<endl;
                for(;;)
                    {
                    cin>>number;
                    if(number == "suma")
                        {
                        int suma;
                        for(int i=0; i<ilosc_cyfr; i++)
                            {
                            suma = suma + cyfry[i];
                            }
                        cout<<suma<<endl;
                        }
                    if(number == "posortuj")
                        {
                        sort( cyfry, cyfry+ilosc_cyfr );

                        for(int i=0; i<ilosc_cyfr; i++)
                            cout << cyfry[i] << " ";
                        cout << endl;
                        }
                    if(number == "ciag_Colltaza" and ilosc_cyfr==1)
                        {
                        int i = 0;
                        cout<<cyfry[i]<<" ";
                        for(;;)
                            {
                            if(cyfry[i] == 1)
                                {

                                }
                            else
                                {
                                if(cyfry[i]%2 == 0)
                                    {
                                    cyfry[i] = cyfry[i]/2;
                                    cout<<cyfry[i]<<" ";
                                    }
                                else
                                    {
                                    cyfry[i] = 3*cyfry[i] + 1;
                                    cout<<cyfry[i]<<" ";
                                    }
                                }
                            }

                        }
                    }
                if(dalej == "graszukanieliczby")
                    {
                    int szukana_liczba,n;
                    string w;
                    srand(time( NULL ));
                    szukana_liczba = (std::rand()%100) + 1;
                    cout<<"Wygenerowalem jakas liczbe z zakresu od 1 do 100"<<endl<<"twoim zadaniem jest zgadnac te liczbe"<<endl;
                    for(int i; i < 100 ; i++)
                        {
                        cin>>n;
                        if(szukana_liczba == n)
                            {
                            cout<<"TAK"<<endl;
                            cout<<"To jest ta liczba, oto twoj wynik"<<endl<<i + 1<<endl ;
                            i = szukana_liczba;
                            break;
                            }
                        else
                            {
                            if(szukana_liczba > n)
                                cout<<"wieksze"<<endl;
                            if(szukana_liczba < n)
                                cout<<"mniejsze"<<endl;
                            }
                        }

                    }
                if(dalej == "Tabliczka_mnozenia")
                    for(int i=1; i<=cyfry[1]; i++)
                        {
                        for(int j=1; j<=cyfry[i+1]; j++)
                            {
                            cout<<i*j<<" ";
                            }
                        cout<<"\n";
                        }

                if(dalej == "NWD")
                    {
                    int n,m;
                    n = cyfry[0];
                    m = cyfry[1];
                    while(n!=m)
                        {
                        if(n > m)
                            {
                            n = n - m;
                            }
                        else
                            {
                            m = m -n;
                            }
                        }
                    if(n == 0)
                        {
                        cout<<m;
                        }
                    else
                        {
                        cout<<n;
                        }
                    }
                }
            }
        }


