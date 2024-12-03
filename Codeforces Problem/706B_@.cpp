#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> shop(n);
    for (int i = 0; i < n; i++)
    {
        cin >> shop[i];
    }
    sort(shop.begin(), shop.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        long coin;
        cin >> coin;
        int ans = upper_bound(shop.begin(), shop.end(), coin) - shop.begin();
        cout << ans << endl;
    }
    return 0;
}