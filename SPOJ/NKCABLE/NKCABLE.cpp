#include <bits/stdc++.h>

using namespace std;

long long a[25005], f[25005];
long long n;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> a[i];
    f[2] = a[1];
    f[3] = a[1] + a[2];
    for (int i = 4; i <= n; i++)
        f[i] = min(f[i - 1] + a[i - 1], f[i - 2] + a[i - 1]);
    cout << f[n];
}