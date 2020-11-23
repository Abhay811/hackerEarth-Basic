#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int c = 0, ce = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (i < n / 2)
            if (i % 2)
                c += int(s[0]);
            else
                ce += int(s[0]);
        else
            if (i % 2)
                c += int(s[s.size() - 1]);
            else
                ce += int(s[s.size() - 1]);
    }
    if (( c - ce) % 11 == 0)
        cout << "OUI\n";
    else
        cout << "NON\n";
}