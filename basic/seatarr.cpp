#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n;
        r = n % 12;
        if (r == 0)
            cout << n - 11 << " WS\n";
        if (r == 1)
            cout << n + 11 << " WS\n";
        if (r == 2)
            cout << n + 9 << " MS\n";
        if (r == 3)
            cout << n + 7 << " AS\n";
        if (r == 4)
            cout << n + 5 << " AS\n";
        if (r == 5)
            cout << n + 3 << " MS\n";
        if (r == 6)
            cout << n + 1 << " WS\n";
        if (r == 7)
            cout << n - 1 << " WS\n";
        if (r == 8)
            cout << n - 3 << " MS\n";
        if (r == 9)
            cout << n - 5 << " AS\n";
        if (r == 10)
            cout << n - 7 << " AS\n";
        if (r == 11)
            cout << n - 9 << " MS\n";
    }
}