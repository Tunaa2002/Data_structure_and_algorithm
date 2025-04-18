#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, k = 0;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        sort(a.begin(), a.end(), cmp);
        for (int i = 0; i < n; i++)
        {
            if (a[i].first >= k)
            {
                k = a[i].second;
                ans++;
            }
        }
        cout << ans << endl;
    }
}