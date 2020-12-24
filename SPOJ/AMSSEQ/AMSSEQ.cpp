#include <bits/stdc++.h>

using namespace std;

long long a[10005], f[10005];
long long n, k, res;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
        for (int j = i - 2; j >= max(i - k, 0ll); j--)
            f[i] = max(f[i], f[j] + a[i]);
        res = max(res, f[i]);
    }
    cout << res;
}