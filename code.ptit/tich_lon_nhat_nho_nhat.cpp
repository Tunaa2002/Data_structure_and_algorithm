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
		int n, m, x, maxa = -1e9, minb = 1e9;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			maxa = max(maxa, x);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			minb = min(minb, x);
		}
		cout << (long long)maxa * minb << endl;
	}
}