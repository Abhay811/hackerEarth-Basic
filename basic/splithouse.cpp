#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'H' and s[i + 1] == 'H')
        {
            flag = 1;
            break;
        }
    if (flag)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            if (s[i] == '.')
                cout << "B";
            else
                cout << s[i];
        cout << endl;
    }
}