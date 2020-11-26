#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    fast;
    int t;
    cin >> t;
    string a;
    int size;

    while (t--)
    {
        int c = 0, c2 = 0;
        cin >> a;
        size = a.size();
        for (int i = 0; i < size; i++)
        {
            if (a[i] == 'S' and a[i + 1] == 'U' and a[i + 2] == 'V' and a[i + 3] == 'O')
                c++;
            if (a[i] == 'S' and a[i + 1] == 'U' and a[i + 2] == 'V' and a[i + 3] == 'O'
                and a[i + 4] == 'J' and a[i + 5] == 'I' and a[i + 6] == 'T')
                c2++;
        }
        cout << "SUVO = " << c - c2 << ", SUVOJIT = " << c2 << endl;
    }

}