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
        int x, ans = 0, s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
            ans = max(ans, s);
            if (s < 0)
                s = 0;
        }
        cout << ans << endl;
    }
}