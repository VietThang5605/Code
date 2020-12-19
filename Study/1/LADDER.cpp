#include <bits/stdc++.h>

using namespace std;

long long a[100005], f[100005];
long long n, k, tmp;

int main()
{
    cin >> n >> k;
    f[1] = 1;
    for (long long i = 1; i <= k; i++)
    {
        cin >> tmp;
        a[tmp]++;
    }
    for (long long i = 2; i <= n; i++)
        if (a[i] >= 1)
            f[i] = 0;
        else 
            f[i] = (f[i - 1] + f[i - 2]) % 14062008;
    cout << f[n];
}