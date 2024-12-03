#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int c = 2, ans = 1;
        while (c < n)
        {
            c += x;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}