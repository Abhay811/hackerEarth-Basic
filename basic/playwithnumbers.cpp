#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n + 1, 0);
    ll t;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        a[i] = a[i - 1] + t;
    }
    while (q--)
    {
        ll s = 0;
        ll l, r;
        cin >> l >> r;
        s = a[r] - a[l - 1];
        cout << s / (r - l + 1) << endl;
    }
    
}