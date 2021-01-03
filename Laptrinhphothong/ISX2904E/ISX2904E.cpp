#include <bits/stdc++.h>

using namespace std;

struct arr
{
    long long x, y;
};

bool cmp(arr c, arr v)
{
    return c.x * v.y > c.y * v.x;
}

arr a[100005];
long long n, res, res1, res2, s[100005];

int main()
{
    scanf("%lli", &n);
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = n; i > 1; i--)
        s[i] = a[i].x + s[i + 1];
    for (int i = 1; i < n; i++)
        res += a[i].y * s[i + 1];
    cout << res * 2;
}