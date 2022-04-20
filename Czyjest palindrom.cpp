#include <iostream>
using namespace std;
string s;
int q, n,palindrom=0;

int main ()
    {
    cin>>q;
    for(int g=1; g<=q; g++)
        {
        cin>>n>>s;


        for(int i=1; i<=n; i++)
            {
            if(s[i-1] == s[i+1])
                {
                palindrom ++;
                break;
                }
            }
        for(int i=1; i<=n; i++)
            {
            if(s[i] == s[i-1])
                {
                palindrom++;
                break;
                }
            }
      
        if(palindrom == 1)
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
        palindrom = 0;
  }
    }




