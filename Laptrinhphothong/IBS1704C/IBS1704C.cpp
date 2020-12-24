#include <bits/stdc++.h>

using namespace std;

long long a[100005], s[100005];
long long n, m, pos, cnt;

int main()
{
    scanf("%lli%lli", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lli", &a[i]);
        s[i] = a[i] + s[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        int pos = upper_bound(s + i, s + 1 + n, m + s[i - 1]) - s;
        cnt += pos - i;
    }
    cout << cnt;
}