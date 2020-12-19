#include <bits/stdc++.h>

using namespace std;

long long t[100005], r[100005], f[100005];
long long n;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    for (int i = 1; i < n; i++)
        cin >> r[i];
    f[1] = min(t[1], r[1]);
    for (int i = 2; i <= n; i++)
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i - 1]);
    cout << f[n];
}