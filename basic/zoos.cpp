#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int size = s.size();
	int x = 0, y = 0;
	for (int i = 0; i < size; i++)
		if (s[i] =='o')
			x++;
		else
			y++;
	if (2 * y == x)
		cout << "YES\n";
	else
		cout << "NO\n";
}