#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    char ch;
    int r, c, i, count = 0;
    cin >> r >> c;
    int m = r * c;
    for (i = 1; i <= m; i++)
    {
        cin >> ch;
        if (ch == 'B' || ch == 'W' || ch == 'G')
        {
            count++;
        }
    }
    if (count == m)
    {
        cout << "#Black&White\n";
    }
    else
    {
        cout << "#Color\n";
    }
    return 0;
}