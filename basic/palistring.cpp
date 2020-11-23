#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size(), flag = 0;
    for (int i = 0; i < size / 2; i++)
        if (s[i] == s[size - i - 1])
            continue;
        else
        {
            flag = 1;
            break;
        }
    if (flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}