//Back to School

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    int a, b, c;
    cin >> a >> b >> c;
    int m = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout << m << endl;
}