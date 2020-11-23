#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
int main()
{
	int n;
	cin >> n;
	ll a, s = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s = (s * a) % mod;
	}
	cout << s << endl;
}