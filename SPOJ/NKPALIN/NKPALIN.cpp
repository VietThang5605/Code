#include <bits/stdc++.h>

using namespace std;

int f[2005][2005];
int n, m;
string a, b;

void dp()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else 
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
}

void trace()
{
    while (f[n][m] > 0)
    {
        if (a[n] == b[m])
        {
            cout << a[n];
            n--;
            m--;
        }
        else 
            if (f[n][m] == f[n - 1][m])
                n--;
            else 
                m--;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--)
        b += a[i];
    n = m = a.size();
    a = " " + a;
    b = " " + b;
    dp();
    trace();
}