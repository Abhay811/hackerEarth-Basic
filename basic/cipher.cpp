#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char s1[] = {'A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I',
                'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char s2[] = {'a', 'b', 'c', 'd','e', 'f', 'g', 'h', 'i',
                'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k, size = s.size();
    cin >> k;
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
            cout << s1[(int(s[i] - 65) + k)%26];
        else if (s[i] >= 'a' and s[i] <= 'z')
            cout << s2[(int (s[i] - 97) + k) % 26];
        else if (s[i] >= '0' and s[i] <= '9')
            cout << n[(int(s[i] - 48) + k) % 10];
        else
            cout << s[i];
        
    }
}