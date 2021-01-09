#include <bits/stdc++.h>

using namespace std;

long long a[1000005];
long long t, tmp, n;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (long long i = 1 ; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    cin >> t;
    while (t--)
    {
        cin >> tmp;
        int pos = lower_bound(a + 1, a + 1 + n, tmp) - a;
        if (a[pos] == tmp)
            cout << a[pos] << "\n";
        else 
        {
            pos--;
            if (pos <= 0)
                cout << -1 << "\n";
            else 
                cout << a[pos] << "\n";
        }
    }
}