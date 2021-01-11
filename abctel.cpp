#include <bits/stdc++.h>

using namespace std;

struct arr
{
    long long x, y;
};

bool cmp(arr c, arr v)
{
    return c.y < v.y;
}

arr a[100005];
long long s[100005];
long long n, k, res, up, low, pos;

void lwb(long long l, long long r, long long m)
{
    if (l <= r)
    {
        long long mid = (l + r) / 2;
        if (a[mid].y >= m)
        {
            low = mid;
            lwb(l, mid - 1, m);
            return;
        }
        else
        {
            lwb(mid + 1, r, m);
            return;
        }
    }
}

void upb(long long l, long long r, long long m)
{
    if (l <= r)
    {
        long long mid = (l + r) / 2;
        if (a[mid].y > m)
        {
            up = mid;
            upb(l, mid - 1, m);
            return;
        }
        else
        {
            upb(mid + 1, r, m);
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i].x;
    for (long long x = 1; x <= 1000000; x++)
    {
        up = low = n + 1;
        lwb(1, n, x - k);
        upb(1, n, x + k);
        if (up == low)
            continue;
        else 
            res = max(res, s[up - 1] - s[low - 1]);
    }
    cout << res;
}