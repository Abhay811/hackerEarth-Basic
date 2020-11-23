#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a = 0, b = 7;
    while (t--)
    {
        int n;
        cin >> n;
        if (abs (n-a) <= abs(b - n))
        {
            cout << "A\n";
            a = n;
        }
        else
        {
            cout << "B\n";
            b = n;
        }
    }
}