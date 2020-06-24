#include <iostream>

using namespace std;

long long T, n, m, k = 1, K, N, res, tg, i;
long long gt[100001];

long long pow(int a, int k)
{
    if (k == 1)
        return a;
    tg = pow(a, k / 2) % 1000000007;
    if (k % 2 == 0)
        return tg * tg % 1000000007;
    return tg * tg % 1000000007 * a % 1000000007;
}

long long Cal(long long K, long long N)
{
    if (K > N)
        return 0;
    long long temp = (gt[K] * gt[N - K]) % 1000000007;
    return gt[N] * pow(temp, 1000000007 - 2);
}
int main()
{
    gt[0] = 1;
    for (i = 1; i <= 100000; i++)
        gt[i] = gt[i - 1] * i % 1000000007;
    while (cin >> m >> n)
    {
        if (m - k * n < 0)
        {
            cout << 0 << "\n";
            continue;
        }
        K = n - 1;
        N = m - (k - 1) * n - 1;
        res = 1;
        while (N > 0)
        {
            res = (res * Cal(K % 1000000007, N % 1000000007)) % 1000000007;
            K = N / 1000000007;
            N = N / 1000000007;
        }
        cout << res << "\n";
    }
}