#include <bits/stdc++.h>
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
		pair<int, int> a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i].second;
		for (int i = 0; i < n; i++)
			cin >> a[i].first;
		sort(a, a + n);
		int ans = 1, k = a[0].first;
		for (int i = 1; i < n; i++)
		{
			if (a[i].second >= k)
			{
				ans++;
				k = a[i].first;
			}
		}
		cout << ans << endl;
	}
}