#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int a[100001], b[100001];
int n, i, dem = 1, t1, t2, j;

int main()
{
    freopen("BWPOINTS.INP","r",stdin);
    freopen("BWPOINTS.OUT","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
        cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    i = 2;
    j = 2;
    t1 = a[1];
    t2 = b[1];
    while (i <= n && j <= n)
    {
        while (a[i] <= t1 || a[i] <= t2)
        {
            i++;
            if (i > n) break;
        }
        if (i > n) break;
        while (b[j] <= t1 || b[j] <= t2)
        {
            j++;
            if (j > n) break;
        }
        if (j > n) break;
        t1 = a[i]; t2 = b[j];
        dem++;
    }
    cout << dem;
}