#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool Var(char c)
{
    return (c >= '1' && c <= '9');
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int st[s.size()] = {}, p = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (Var(s[i]))
                st[++p] = s[i] - '0';
            if (s[i] == '*')
            {
                st[p - 1] *= st[p];
                p--;
                continue;
            }
            if (s[i] == '/')
            {
                st[p - 1] /= st[p];
                p--;
                continue;
            }
            if (s[i] == '+')
            {
                st[p - 1] += st[p];
                p--;
                continue;
            }
            if (s[i] == '-')
            {
                st[p - 1] -= st[p];
                p--;
                continue;
            }
        }
        cout << st[0] << endl;
    }
}