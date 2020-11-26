#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int i = 0; i < n; i++)
        if (k == a[i])
            cout << i << endl;
}