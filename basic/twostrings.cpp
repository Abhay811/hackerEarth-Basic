// two strings

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
	fast;
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int s1size = s1.size();
        int s2size = s2.size();
        int flag = 0;
        int a1[26] = {0}, a2[26] = {0};
        for (int i = 0; i < s1size; i++)
            a1[int(s1[i] - 97)]++;
        for (int i = 0; i < s2size; i++)
            a2[int(s2[i] - 97)]++;
        for (int i = 0; i < 26; i++)
            if (a1[i] != a2[i])
            {
                flag = 1;
                break;
            }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}