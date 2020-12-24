#include <bits/stdc++.h>

using namespace std;

map <int, int> mp;
int n, res;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
        if (mp[tmp] % tmp == 0)
            res++;
    }
    cout << res;
}