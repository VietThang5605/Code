#include <bits/stdc++.h>

using namespace std;

long long n, k, tmp, ucln, res;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> k;
    cin >> ucln;
    for (int i = 2; i <= n; i++)
    {
        cin >> tmp;
        ucln = __gcd(ucln, tmp);
    }
    res = k - k % ucln;
    for (long long i = 2; i * i <= ucln; i++)
        if (ucln % i == 0)
        {
            res = max(res, k - k % i);
            res = max(res, k - k % (ucln / i));
        }
    cout << res;
}