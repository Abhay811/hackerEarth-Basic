#include <bits/stdc++.h>
using namespace std;
int N = 123;
vector<int> a;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
void primes()
{
    for (int i = 67; i <= 90; i++)
        if (isPrime(i))
            a.emplace_back(i);
    for (int i = 97; i <= N; i++)
        if (isPrime(i))
            a.emplace_back(i);
}
int main()
{
    primes();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int r, ind, u, m = INT_MAX, size = a.size();
        for (int i = 0; i < n; i++)
        {
            r = int(s[i]);
            for (int j = 0; j < size; j++)
            {
                u = abs(r - a[j]);
                if (u < m)
                {
                    ind = j;
                    m = u;
                }
            }
            m = INT_MAX;
            cout << char(a[ind]);

        }
        cout << endl;
    }
    
}