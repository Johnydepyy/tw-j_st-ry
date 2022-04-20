#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int  x=0, y, k, n, high, low, srd;
ll tab1[100001];
pair <ll, int> arr[100001];
bool sprawdx(int y)
{
    if(x < arr[y].first)	return true;
    else			return false;
}
int maks(int x)
{
    sort(arr+1, arr+k+1);
    return arr[k].first;
}
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k>>n;
    for(int i=1; i<=k; i++)
        cin>>y, arr[i]= {y, i};
    for(int i=1; i<=n; i++)
        cin>>tab1[i];
    sort(arr+1, arr+k+1);
    //for(int i=1;i<=k;i++)
    //cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    for(int i=1; i<=n; i++)
        {
            low=0;
            high=k;
            x = tab1[i];
            if(x > maks(x)) cout<<"-1\n";
            else
                {

                    while(low+1!= high)
                        {
                            srd = (low+high)/2;
                            if(sprawdx(srd))	high=srd;
                            else				low=srd;
                        }
                    cout<<arr[high].second<<"\n";
                }
        }
}