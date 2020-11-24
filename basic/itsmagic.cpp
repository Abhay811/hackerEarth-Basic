// It's Magic

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    ll n, s = 0;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int ind = 0, m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ((s - a[i]) % 7 == 0)
        {
            if (a[i] < m)
            {
                m = a[i];
                ind = i;
            }
        }
    }
    ind > 0 ? cout << ind : cout << "-1";
}