#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    ll n,i,k,j,left,p=0,m=-10000000;
    cin >> n;
    vector<ll> a(n);
    ll s = 0;
    for(i = 0;i < n; i++)
    {
        cin >> a[i];
        if(i > 0)
            a[i] += a[i - 1];
    }
    for(i = 0; i < n; i++)
    {
        left = n-i;
        s = 0;
        k = (-1 + (int)sqrt((double)(8 * left + 1))) / 2;
        s=a[(k * (k + 1)) / 2 + i - 1];
        if(i != 0)
            s -= a[i - 1];
        if(m < s)
            m = s;
    }
 cout << m;
}