#include <bits/stdc++.h>

using namespace std;

int res, n, tmp;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    cin >> res;
    for (int i = 2; i <= n; i++)
    {
        cin >> tmp;
        res ^= tmp;
    }
    cout << res;
}