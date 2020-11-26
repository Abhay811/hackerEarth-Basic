#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    ll d, oc, of, od, cs, cb, cm, cd, s = 0, s1 = 0;
    cin >> d >> oc >> of >> od >> cs >> cb >> cm >> cd;
    s = oc + (d - of) * od;
    s1 = cb + (d / cs)  * cm + d * cd;
    if (s <= s1)
        cout << "Online Taxi\n";
    else 
        cout << "Classic Taxi\n";
}