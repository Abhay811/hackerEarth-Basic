#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int d;
    cin >> d;
    int r, x, c = 0;
    float cir = 0;
    while (d--)
    {
        cin >> r >> x;
        cir = float(2 * 22 * r) / 7;
        if (cir <= 100 * x)
            c++;
        
    }
    cout << c << endl;
}