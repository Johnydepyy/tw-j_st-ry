#include <bits/stdc++.h>
using namespace std;
long long  n, x, res=0, L=1;
long long  pieces[1000001];//[1];

set <long long > se_t;
int main ()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>pieces[i];
    for(int p=1;p<=n;p++)
    {
        while(se_t.count(pieces[p])!=0)
        {
            se_t.erase(pieces[L]), L++;
        }
        se_t.insert(pieces[p]);
        x = se_t.size();
        res=max(res, x);
    }
    cout<<res;

}