#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = -1, s = 0;
    for (int i = 1; i < n; i++)
    {
        s += i;
        if (s >= n)
        {
            flag = 1;
            break;
        }
        s += 2 * i;
        if (s >= n)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Patlu\n";
    else
        cout << "Motu\n";
}