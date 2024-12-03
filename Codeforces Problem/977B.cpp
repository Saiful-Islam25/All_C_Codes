#include <bits/stdc++.h>
using namespace std;

string str;

int call(string s)
{
    int cnt = 0;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == s[0] && str[i + 1] == s[1])
            cnt++;
    }

    return cnt;
}

int main()
{
    int maxi = 0, n;
    string gram;

    cin >> n;
    cin >> str;

    for (int i = 0; i < str.size() - 1; i++)
    {
        string s = str.substr(i, 2); 

        int temp = call(s);

        if (temp > maxi)
        {
            maxi = temp;
            gram = s;
        }
    }

    cout << gram << endl;
}