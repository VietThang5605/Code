#include <bits/stdc++.h>

using namespace std;

long long a[100005], b[100005];
long long n, k, n1, n2, tmp, res;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (tmp > 0)
        {
            n1++;
            a[n1] = tmp;
        }
        else 
        {
            n2++;
            b[n2] = abs(tmp);
        }
    }
    sort(a + 1, a + 1 + n1);
    for (int i = 1; i <= n2; i++)
    {
        long long up = upper_bound(a + 1, a + 1 + n1, b[i] + k) - a;
        long long low = lower_bound(a + 1, a + 1 + n1, b[i]) - a;
        res += up - low;
    }
    cout << res;
}