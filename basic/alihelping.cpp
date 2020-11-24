#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    string s;
    cin >> s;
    if (((int(s[0] - 48) + int(s[1] - 48)) % 2 == 0) &&
        ((int(s[3] - 48) + int(s[4] - 48)) % 2 == 0)
        and ((int(s[4] - 48) + int(s[5] - 48)) % 2 == 0)
        and ((int(s[7] - 48) + int(s[8] - 48)) % 2 == 0)
        and (!(s[2] == 'A' || s[2] == 'E' || s[2] == 'I' ||
        s[2] == 'O' || s[2] == 'U' || s[2] == 'Y')))
        cout << "valid\n";
    else
        cout << "invalid\n";
}