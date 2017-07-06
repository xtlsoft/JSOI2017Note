#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long k;
    cin >> k;
    long long i = k, t = 1, total = 0;
    while(i > 0)
    {
        if(i >= t)
        {
            total += t * t;
            i = i - t;
        }
        else
        {
            total += i * t;
            i = i - t;
        }
        ++ t;
    }
     
    cout << total << endl;
    return 0;
}
