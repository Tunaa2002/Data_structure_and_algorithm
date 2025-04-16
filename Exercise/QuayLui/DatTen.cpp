#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<string> vs, ans;
int B[35];

void in()
{
    for(int i = 1; i <= k; ++i) cout << vs[B[i] - 1] << ' ';
    cout << endl;
}

void quaylui(int i)
{
    for(int j = B[i - 1] + 1; j <= vs.size() - k + i; ++j)
    {
        B[i] = j;
        if(i == k) in();
        else quaylui(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    string s;
    map<string, bool> m;
    for(int i = 0; i < n; ++i)
    {
        cin >> s;
        m[s] = 1;
    }
    for(auto &i : m) vs.push_back(i.first);
    quaylui(1);
}

