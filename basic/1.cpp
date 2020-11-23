#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

ll a, b, c, m, d, x, y;
void extendedEuclid (ll a, ll b)
{
    if (b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclid(b, a % b);
        int temp = x;
        x = y;
        y = temp - (a / b) * y;
    }
    
}
ll modInverse (ll a, ll m)
{
    extendedEuclid(a, m);
    return (x % m + m) % m;
}
ll binpow (ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    fast;
    cin >> a >> b >> c >> m;
    ll res = binpow(a, b, m);
    ll res2 = modInverse(c, m);
    cout << (res * res2) % m;
}