#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    ll m = *max_element(a.begin(), a.end());
    ll m2 = *min_element(a.begin(), a.end());
    cout << s - m << " " << s - m2 << endl;
}