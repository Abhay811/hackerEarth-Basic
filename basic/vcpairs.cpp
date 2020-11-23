#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int size = s.size(), c = 0, f = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            {
                if (f)
                {
                    c++;
                    f = 0;
                }
            }
            else
                f = 1;
            
        }
        cout << c << endl;
    }
}