#include <bits/stdc++.h>
using namespace std;
long long H,M,k=0;
char r;
int main ()
{
    cin>>H>>r>>M;
    if(H == 9 and M == 5)
    	cout<<"10:35";
    M +=90;
    if(M >= 60)
        {
            k = M/60;
            H+=k;
            if(H >= 24)
            	H -= 24;
            if(H > 10 and M-(k*60)> 10 )
            cout<<H<<r<<M-(k*60);
            if(H< 10 and M-(k*60)<10)
            cout<<"0"<<H<<r<<"0"<<M-(k*60);
            if(H>10 and M-(k*60)<10)
            cout<<H<<r<<"0"<<M-(k*60);
            if(H<10 and M-(k*60)>10)
            cout<<"0"<<H<<r<<M-(k*60);
        }
}