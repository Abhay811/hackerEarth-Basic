#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main()
{
    int n;
    cin >> n;
    double w, h, r;
    int c = 0;
    while (n--)
    {
        cin >> w >> h;
        if (w > h)
            r = w / h;
        else
            r = h / w;
        if (r >= 1.6 and r <= 1.7)
            c++;
    }
    cout << c << endl;
}