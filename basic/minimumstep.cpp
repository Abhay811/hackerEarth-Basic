#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin >> t;
    ll k, m, n;
    while (t--)
    {
        cin >> k >> m >> n;
        ll c = 0, l;
        while(k < m)
        {
            if(m%n==0)
            {
                m=m/n;
                c++;
            }
            else
            {
                l = (n - (m % n));
                m += (n - (m % n)) / 2 * 2 + (n - (m % n)) % 2;
                c += l / 2 + l % 2;
            }  
        }
        ll r = k - m;
        if (k > m)            
            c += r / 2 + r % 2;
        cout << c << endl;
    }
}