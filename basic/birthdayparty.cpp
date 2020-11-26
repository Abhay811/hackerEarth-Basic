#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        if (m % n)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}