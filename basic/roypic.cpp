#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, n;
    cin >> l >> n;
    while (n--)
    {
        int w, h;
        cin >> w >> h;
        if (w < l || h < l)
            cout << "UPLOAD ANOTHER\n";
        else if (w == h and w >= l)
            cout << "ACCEPTED\n";
        else
            cout << "CROP IT\n";
    }
}