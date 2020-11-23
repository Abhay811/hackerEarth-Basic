#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool palind(ll n)
{
    ll r = 0, s = 0, p = n;
    while (p)
    {
        r = p % 10;
        s = s * 10 + r;
        p /= 10;
    }
    if (s == n)
        return true;
    else
        return false;
}
ll main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m;
        cin >> m;
        for (ll i = m + 1; i < 2 * m; i++)
            if (palind(i))
            {
                cout << i << endl;
                break;
            }
    }
}