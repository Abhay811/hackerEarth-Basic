#include <bits/stdc++.h>
using namespace std;
int a[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int s = 0;
        int size = n.size();
        for (int i = 0; i < size; i++)
            s += a[int(n[i] - 48)];
        int m;
        if (s % 2)
        {
            m = s / 2 - 1;
            cout << 7;
        }
        else
            m = s / 2;
        for (int i = 0; i < m; i++)
            cout << 1;
        cout << endl;
    }
}