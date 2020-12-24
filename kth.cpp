#include <bits/stdc++.h>

using namespace std;

long long n, k, t, res;

long long cnt(long long x)
{
    return x - x / n;
}

long long bs(long long l, long long r)
{
    if (l <= r)
    {
        long long mid = (l + r) / 2;
        long long dem = cnt(mid);
        if (dem == k)
        {
            if (mid % n != 0)
                return mid;
            else 
                return bs(l, mid - 1);
        }
        else 
            if (dem > k)
                return bs(l, mid - 1);
            else 
                return bs(mid + 1, r);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << bs(1, 1000000000000000000) << "\n";
    }
}