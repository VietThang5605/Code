#include <bits/stdc++.h>

using namespace std;

string a, b;
int f[2005][2005];
int n, m;


int main()
{
    ios::sync_with_stdio(0);
    cin >> a; cin.ignore();
    cin >> b; cin.ignore();
    n = a.size();
    m = b.size();
    a = " " + a;
    b = " " + b;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else 
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
    cout << f[n][m];
}