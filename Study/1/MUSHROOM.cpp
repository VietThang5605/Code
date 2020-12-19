#include <bits/stdc++.h>

using namespace std;

long long a[105][105], f[5][105][105];
long long n, m;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    f[1][1][1] = 1;
    f[2][1][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            f[2][i][j] = (f[2][i][j] + (a[i - 1][j] != a[i][j]) * f[1][i - 1][j] + f[2][i - 1][j]) % 10000000;
            f[1][i][j] = (f[1][i][j] + (a[i - 1][j] == a[i][j]) * f[1][i - 1][j]) % 10000000;
            f[2][i][j] = (f[2][i][j] + (a[i][j - 1] != a[i][j]) * f[1][i][j - 1] + f[2][i][j - 1]) % 10000000;
            f[1][i][j] = (f[1][i][j] + (a[i][j - 1] == a[i][j]) * f[1][i][j - 1]) % 10000000;
        }
    cout << f[2][n][m];
}