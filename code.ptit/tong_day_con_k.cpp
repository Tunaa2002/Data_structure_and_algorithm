#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k;
vector<int> a, b;
vector<vector<int>> res;
void pb()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
            sum += b[i];
    if (sum == k)
        res.push_back(a);
}
void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
            pb();
        else
            BackTrack(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n, 0);
    b.resize(n, 0);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    BackTrack(0);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            if (res[i][j] == 1)
                cout << b[j] << ' ';
        cout << endl;
    }
    cout << res.size();
}