#include <bits/stdc++.h>

using namespace std;

long long t, n, res;

long long cnt(long long x)
{
    long long dem = 0;
    while (x > 0)
    {
        x /= 5;
        dem += x;
    }
    return dem;
}   

void bs(long long l, long long r)
{
    if (l <= r)
    {
        long long mid = (l + r) / 2;
        long long tmp = cnt(mid);
        if (tmp >= n)
        {
            res = mid;
            bs(l, mid - 1);
        }
        else 
            bs(mid + 1, r);
    }
}

int main()
{
    scanf("%lli", &t);
    while (t--)
    {
        scanf("%lli", &n);
        bs(1, 10000000000000000);
        if (n == 0)
            cout << 0 << " ";
        else 
            cout << res << " ";
    }
}