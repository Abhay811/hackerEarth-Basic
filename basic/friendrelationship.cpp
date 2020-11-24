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
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            string s = "";
            for (int j = 0; j < n; j++)
                if (j < i)
                    s += "*";
                else
                    s += "#";
            cout << s;
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
}