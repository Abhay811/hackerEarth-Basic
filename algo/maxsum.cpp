#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    int n;
    cin >> n;
    ll a, c = 0, s = 0, max = -INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= 0)
        {
            s += a;
            c++;
        }
        if (max < a)
            max = a;
        
    }
    if (max < 0)
        cout << max << " " << 1 << endl;
    else
        cout << s << " " << c << endl;
}