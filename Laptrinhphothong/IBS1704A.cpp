#include <bits/stdc++.h>

using namespace std;

long long q, k, res;

void bs(long long l, long long r)
{
    if (l <= r)
    {
        long long mid = (l + r) / 2;
        long long tmp = (mid * mid * mid) - (2 * mid);
        if (tmp > k)
            bs(l, mid - 1);
        else
            if (tmp < k)
                bs(mid + 1, r);
            else
                res = mid;
    }
}

void f()
{
    res = -1;
    k -= 5;
    if (k <= 0)
        res = -1;
    else
        bs(1, 2000000);
}

int main()
{
    scanf("%lli", &q);
    while (q--)
    {
        scanf("%lli", &k);
        f();
        cout << res << "\n";
    }
}
