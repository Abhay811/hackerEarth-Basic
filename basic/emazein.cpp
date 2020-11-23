#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x = 0, y = 0, x1 = 1, x2 = -1, y1 = 1, y2 = -1;
    cin >> s;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'L')
            x += x2;
        else if (s[i] == 'R')
            x += x1;
        else if (s[i] == 'U')
            y += y1;
        else if (s[i] == 'D')
            y += y2;
    }
    cout << x << " " << y << endl;
}