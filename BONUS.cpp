#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[1001][1001];
long long i, j, n, k, ans;

int main()
{
    freopen("BONUS.inp","r",stdin);
    freopen("BONUS.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            a[i][j] = a[i][j] + a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    for (i = k; i <= n; i++)
        for (j = k; j <= n; j++)
        {
            ans = max(ans, a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k]);
        }
    cout << ans;    
}