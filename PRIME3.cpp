#include <iostream>
#include <stdio.h>

using namespace std;

int a[1000001];
int l, r ,i, j, dem;

int rev(int m)
{
    int s = 0;
    while (m > 0)
    {
        s = s * 10 + m % 10;
        m /= 10;
    }
    return s;
}

int main()
{
    freopen("PRIME3.inp","r",stdin);
    freopen("PRIME3.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> l >> r;
    a[0] = a[1] = 1;
    for (i = 2; i * i <= 1000000; i++)
        if (a[i] == 0)
            for (j = i; j * i <= 1000000; j++)
                a[i * j] = 1;
    for (i = l; i <= r; i++)
        if (a[i] == 0 && a[rev(i)] == 0)
            dem++;
    cout << dem;
}