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
        int a, b, c;
        cin >> a >> b >> c;
		if (2 * b == a + c)
			cout << 0 << endl;
		else
        	cout << ceil(abs(2*b - (a + c))/2.0) << endl;
        
    }
}