#include<bits/stdc++.h>
using namespace std;
int n,N,suma=1,wynik=0;
bool pierwsza(long long n)
{
    if(n<2)
        return false;
    for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
                return false;
        }
    return true;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n,N=n;
	long long n_;
	n_ = n;
    for(long long i=2; i<=N; i++)
        {
            if(pierwsza(n))
                {
                    suma+=2;
                    cout<<n<<" LICZBA PIERWSZA+2 DO SUMY\n";
			  n = n_-1;
			  n_--;
                }
            else
                {
                	for(long long j=2;j*j<=N;j++){
                    wynik=1;
                    long long ile=0;
                    while(n%j==0)
                        {
                            cout<<n<<"|"<<j<<endl;
                            n/=j,ile++;
                        }
                    if(ile != 0)
                        wynik = wynik * (ile+1);
                    if(n != 1)
                            wynik+=2;}
                    suma+=wynik;
                    cout<<"SUMA= "<<suma<<"\nPRZEJSCIE\n";
                    n = n_-1;
                    n_--;
                }
        }
    cout<<suma<<" DODANO 1";
}

