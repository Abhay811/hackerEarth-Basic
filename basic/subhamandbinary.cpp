#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int c = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                c++;
        cout << c << endl;
    }
}