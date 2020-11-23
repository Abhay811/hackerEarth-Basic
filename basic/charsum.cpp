#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int r = 0;
    for (int i = 0; i < size; i++)
        r += (int)s[i]-96;
    cout << r << endl;
}