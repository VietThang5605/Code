#include <bits/stdc++.h>

using namespace std;

int a, b, c, dmax, res;
int d[1000];

int main()
{
    ios::sync_with_stdio(0);
    cin >> a >> b >> c;
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            for (int k = 1; k <= c; k++)
                d[i + j + k]++;
    for (int i = 100; i >= 3; i--)
        if (d[i] >= dmax)
        {
            dmax = d[i];
            res = i;
        }
    cout << res;
}