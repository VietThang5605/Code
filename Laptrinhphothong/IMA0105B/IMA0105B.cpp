#include <bits/stdc++.h>

using namespace std;

long long n, res = 1;

int main()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
        while (res % 10 == 0)
            res /= 10;
        res %= 10000000;
    }
    cout << res % 10;
}