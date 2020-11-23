#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int cg, cp;
		cin >> cg >> cp;
		int n;
		cin >> n;
		int s = 0, sb = 0, a, b;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			s += a;
			sb += b;
		}
		cout << s << " " << sb << endl;
		cout << min (cg, cp) * max (s, sb) + max (cg, cp) * min(s, sb) << endl;
	}
}

