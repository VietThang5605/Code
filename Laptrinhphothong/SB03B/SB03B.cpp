#include <bits/stdc++.h>

using namespace std;

long long a[1000005];
long long t, tmp, n;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (long long i = 1 ; i <= n; i++)
        a[i] = i * i + 1;
    cin >> t;
    while (t--)
    {
        cin >> tmp;
        cout << a[lower_bound(a + 1, a + 1 + n, tmp) - a] << "\n";
    }
}