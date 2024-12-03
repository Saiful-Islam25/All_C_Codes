#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char n;
    cin >> n;
    string s = "codeforces";

    bool a = false;
    for (int i = 0; i < s.size(); i++)
        if (n == s[i])
        {
            a = true;
            break;
        }
    if (a)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}