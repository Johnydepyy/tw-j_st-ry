#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int high, n, leng, actual=0, result=0;
    cin >> n >> high;
    for (int i=0; i<n; i++)
    {
        cin >> leng;
        actual+=leng;
        if (actual>=high)
        {
            result++;
            actual=0;
        }

    }
    cout << result;
}