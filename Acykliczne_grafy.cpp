#include <bits/stdc++.h>
using namespace std;
vector <pair <int , int> > wiktor;
vector <pair <int , int> > wektor;
int k, w, x, y;
int main()
{
    cin>>w>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>x>>y;
        if(x > y)   wiktor.push_back({x ,y});
        else        wektor.push_back({x, y});
    }
    if(wiktor.size()<=wektor.size())
    {
        cout<<wiktor.size()<<"\n";
        for(auto i : wiktor)    cout<<i.first<<" "<<i.second<<"\n";   
    }else{
        cout<<wektor.size()<<"\n";
        for(auto i : wektor)    cout<<i.first<<" "<<i.second<<"\n";
    }
}