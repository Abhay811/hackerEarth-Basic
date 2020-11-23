#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main()
{
    fast;
    ll n;
    while (cin >> n)
    {
    string r = "";

    while (n != 0)
    {
        r = to_string(n % 9) + r;
        n /= 9;
    }
    if (r.empty())
        r = "0";
    cout << r << endl;
    }
}