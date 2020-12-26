#include <bits/stdc++.h>

using namespace std;

long long a[305][305];
long long n, tmp, pos, sum;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    pos = n / 2 + 1;
    if (n % 2 == 0)
        tmp = 2;
    else 
        tmp = 1;
    while (pos <= n)
    {
        sum = a[pos][pos];
        for (int i = pos - 1; i > pos - tmp; i--)
            sum += a[i][pos];
        for (int i = pos - 1; i > pos - tmp; i--)
            sum += a[pos][i];
        for (int i = pos - 1; i > pos - tmp; i--)
            sum += a[i][pos - tmp + 1];
        for (int i = pos - 1; i > pos - tmp; i--)
            sum += a[pos - tmp + 1][i];
        if ((pos != n / 2 + 1) || (n % 2 == 0))
            sum -= a[pos - tmp + 1][pos - tmp + 1];
        cout << sum << " ";
        pos++;
        tmp += 2;
    }
}