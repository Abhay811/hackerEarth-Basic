#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int n;
    cin >> n;
    string s = "*   *", s2 = "*****";
    while (n--)
    {
        cout << s << endl << s << endl;
        cout << s2 << endl;
    }
    cout << s << endl << s;
}