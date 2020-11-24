#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    string s;
    cin >> s;
    int sum = 0;
    int size = s.size();
    if (size != 10)
        cout << "Illegal ISBN\n";
    else
    {
        for (int i = 0, j = 1; i < size; i++, j++)
            sum += int(s[i] - 48) * j;
        if (sum % 11)
            cout << "Illegal ISBN\n";
        else
            cout << "Legal ISBN\n";
    }
    
}