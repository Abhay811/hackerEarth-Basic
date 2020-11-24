#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
	vector<string> a(12, ""), b(12, "");
	int i = 0, j = 0;
	while (1) 
	{
		i += 1;
		j += 1;
		cin >> a[i] >> b[i];
		if (a[i] == "" && b[i] == "") 
			break;

		string c = "", str = "";
		int m = a[i].length() - b[i].length();
		m = abs(m);
		str += string(m, '0');
		if (a[i].length() > b[i].length())
			b[i].insert(0, str);
		else
			a[i].insert(0, str);

		int r = 0, s = 0;
		for (int k = a[i].length() - 1; k >= 0; k--) 
		{
			s = int(a[i][k] - 48) + int(b[i][k] - 48) + r;
			if (s >= 10) 
			{
				r = 1;
				s %= 10;
				c += to_string(s);
			}
			else 
			{
				r = 0;
				c += to_string(s);
			}
		}
		if (r)
			c += '1';
		reverse(c.begin(), c.end());
		cout << c << endl;
	}
}