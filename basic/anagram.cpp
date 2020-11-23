#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int s = 0;
        int asize = a.size(), bsize = b.size();
        int ar[26] = {0}, br[26] = {0};
        for (int i = 0; i < asize; i++)
            ar[(int)a[i] - 97]++;
        for (int i = 0; i < bsize; i++)
            br[(int)b[i] - 97]++;

        for (int i = 0; i < 26; i++)
            s += abs(ar[i] - br[i]);
        cout << s << endl;
    }
}