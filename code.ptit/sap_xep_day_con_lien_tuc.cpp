#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n + 1], b[n + 1], s = 0, l, r, ma = 0, mi = 1e9;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if (a[i] > s)
				s = a[i];
			b[i] = s;
		}
		for (int i = 1; i <= n - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				l = i;
				break;
			}
		}
		for (int i = n; i >= 2; i--)
		{
			if (a[i] < a[i - 1])
			{
				r = i;
				break;
			}
		}
		for (int i = l; i <= r; i++)
		{
			if (a[i] > ma)
				ma = a[i];
			if (a[i] < mi)
				mi = a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			if (a[i] > mi)
			{
				cout << i << " ";
				break;
			}
		}
		for (int i = n; i >= 1; i--)
		{
			if (a[i] <= ma)
			{
				cout << i << endl;
				break;
			}
		}
	}
}