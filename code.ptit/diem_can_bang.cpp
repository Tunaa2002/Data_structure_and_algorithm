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
		int a[n], s = 0, k = 0, ans = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			s += a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (k * 2 + a[i] == s)
			{
				ans = i + 1;
				break;
			}
			k += a[i];
		}
		cout << ans << endl;
	}
}