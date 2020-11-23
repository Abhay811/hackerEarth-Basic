#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sh, sm, eh, em, s, s2;
    while (n--)
    {
        cin >> sh >> sm >> eh >> em;
        s = sh * 60 + sm;
        s2 = eh * 60 + em;
        cout << (s2 - s) / 60 << " " << (s2 - s) % 60 << endl;
    }
}
