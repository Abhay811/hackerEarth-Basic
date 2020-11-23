#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
const int m = 1e6 + 3;

int main()
{
    fast;
    ll a[m + 1];
    a[0] = 1;
    for (ll i = 1; i <= m; i++)
        a[i] = (a[i - 1] * i) % m; 
    int t;
    cin >> t;
    while (t--)
    {
        unsigned ll n, x;
        cin >> n >> x;
        if (n >= m)
            n = 0;
        cout << (a[n] * x) % m << endl;

    }
}