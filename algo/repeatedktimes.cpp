#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    fast;
    int n, s;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[s]++;
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
        if (a[i] == k)
        {
            cout << i << endl;
            break;
        }

}