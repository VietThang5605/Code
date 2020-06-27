#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[1000001];
long long n, i, ans, m;

int main()
{
    freopen("GIFTS.inp","r",stdin);
    freopen("GIFTS.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    ans = a[m] - a[1];
    for (i = m + 1; i <= n; i++)
        ans = min(a[i] - a[i - m + 1], ans);
    cout << ans;
}