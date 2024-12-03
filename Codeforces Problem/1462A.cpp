#include <bits/stdc++.h>
using namespace std;
int main()
{
    (ios_base::sync_with_stdio(false), cin.tie(NULL));

    int t, n, a[305];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int div = 0;
        vector<int> v;
        div = (n / 2) + (n % 2);
        for (int i = 1; i <= div; i++)
        {
            if (n & 1)
            {
                if (i == div)
                {
                    v.push_back(a[i]);
                    continue;
                }
            }
            v.push_back(a[i]);
            v.push_back(a[n - i + 1]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
