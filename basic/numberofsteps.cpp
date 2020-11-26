#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	int m = INT_MAX;
	bool flag = false;
	int c;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < m)
			m = a[i];
	}
	for (int i = 0; i < n; i++)
		cin >> b[i];

	for (int i = 0; i < n; i++)
	{
		while (a[i] > m)
		{
			a[i] -= b[i];
			c++;
			if (a[i] < 0)
			{
				flag = true;
				break;
			}
		}
		if (flag)
			break;
		if (a[i] < m)
			m = a[i];
	}
	for (int i = 1; i < n; i++)
		if (a[i] != a[i - 1])
			flag = true;
	if (flag)
		cout << "-1";
	else
		cout << c;

}