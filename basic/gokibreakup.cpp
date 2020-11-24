// Goki and his breakup

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int n, x, y;
    cin >> n >> x;
    while (n--)
    {
        cin >> y;
        if (y >= x)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
}