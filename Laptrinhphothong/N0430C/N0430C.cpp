#include <bits/stdc++.h>

using namespace std;

map <long long, long long> mp;
long long n, tmp, res;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        res += mp[tmp];
        mp[tmp]++;
    }
    cout << res;
}