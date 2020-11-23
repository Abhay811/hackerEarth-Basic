#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define EL '\n'
int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
                c += 2;
            if (i * i == n) 
                c--;
        }
        cout << c << EL;
    }
    // cout << sizeof(ll);
}