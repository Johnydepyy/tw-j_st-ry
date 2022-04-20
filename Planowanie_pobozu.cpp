#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
map <int , int> M;
vector <int > V;
vector <int > P;
long long  n, x, y, res, low, high, mid, q,g;
long long ans;
int f(long long z)
{
   	long long g=1;
   	while(g < z)	g*=2;
   	return g-z;
}
int BL(long long A)
{
    low=0, high=P.size()-1;
    while(low+1!=high)
        {
            mid=(high+low)/2;
            if( A >= P[mid])	low=mid;
            else			high=mid;
        }
    return P[low];
}
int  BP(long long B)
{
    low=0, high=P.size()-1;
    while(low+1!=high)
        {
            mid=(high+low)/2;
            if( B >= P.back()-P[mid])	high=mid;
            else			low=mid;
        }
    return P.back()-P[high];
    }
void  sprawdz(long long A, long long B)
{
      x = BL(A);
    y = BP(B);
    if(x+y>P.back())	return;
    res=(A-x) + (B-y) + f(P.back()-x-y);
    ans=min(ans, res);//, cout<<"PPO MINIMUM ="<<ans<<"\n";
}

int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    cin>>q;
    for(int i=1; i<=q; i++)
        {
        	ans=(1<<30), M.clear(), V.clear(), P.clear();;
            cin>>n;
            for (int i=1; i<=n; i++)	cin>>x, M[x]++;
            for(auto i : M)
                V.push_back(i.second);
            P.push_back(0);
            for(auto i : V)
                P.push_back(i+P.back());
            for(int i=1; i<=n; i*=2)
                for(int j=1; j<=n; j*=2)
                    {
                        sprawdz(i, j);
                    }
            /*if(ans == -1)	answer[i]=0;
            if(ans == -3)	answer[i]=1;
            if(ans == -5)	answer[i]=2;*/
            cout<<ans<<"\n";
        }
}