#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;
string kier[] = {" ", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string caro[] = {" ", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string pik[] = {" ", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string tref[] = {" ", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
string kier_1[13];
string pik_1[13];
string tref_1[13];
string caro_1[13];
bool visited_kier[13];
bool visited_pik[13];
bool visited_caro[13];
bool visited_tref[13];
int main()
{
    // KIERY
    //int q = 4;
    //while (q--)
    //{
        srand(time(NULL));
        int a = (std::rand() % 13) + 1;
        for (int i = 1; i <= a; i++)
        {
            int ktra = (std::rand() % 13) + 1;
            if (!visited_kier[ktra])
                kier_1[i] = kier[ktra], visited_kier[ktra] = 1;
        }
        cout << "KIERA = ";
        for (int i = 1; i <= a; i++)
            //if (kier_1[i] != "0")
                cout << kier_1[i];
        cout << "\n";

        // PIKI

        int b = (std::rand() % (13 - a)) + 1;
        for (int i = 1; i <= b; i++)
        {
            int ktra = (std::rand() % 13) + 1;
            if (!visited_pik[ktra])
                pik_1[i] = pik[ktra], visited_pik[ktra] = 1;
        }
        cout << "PIKI = ";
        for (int i = 1; i <= b; i++)
            //if (pik_1[i] != "0")
                cout << pik_1[i];
        cout << "\n";
        // CARA
        cout << "CARA = ";
        int c = (std::rand() % (13 - a - b)) + 1;
        for (int i = 1; i <= c; i++)
        {
            int ktra = (std::rand() % 13) + 1;
            if (!visited_caro[ktra])
                caro_1[i] = caro[ktra], visited_caro[ktra] = 1;
        }
        for (int i = 1; i <= c; i++)
            //if (caro_1[i] != "0")
                cout << caro_1[i];
        cout << "\n";

        // TREFLE
        cout << "TREFLE = ";
        int d = (std::rand() % (13 - a - b - c)) + 1;
        for (int i = 1; i <= d; i++)
        {
            int ktra = (std::rand() % 13) + 1;
            if (!visited_tref[ktra])
                tref_1[i] = tref[ktra], visited_tref[ktra] = 1;
        }
        for (int i = 1; i <= d; i++)
            //if (tref_1[i] != " 0")
                cout << tref_1[i];
        cout << "\n";
        //cout << "\n"<< "\n";
    //}
}