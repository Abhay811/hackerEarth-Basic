#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] < 95)
            cout << char (s[i] + 32);
        else
            cout << char (s[i] - 32);
    }
}