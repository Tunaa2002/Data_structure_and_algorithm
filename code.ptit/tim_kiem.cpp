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
		int n, x, k, ans = -1;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x == k)
				ans = 1;
		}
		cout << ans << endl;
	}
}