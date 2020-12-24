#include <bits/stdc++.h>

using namespace std;

int a[1000005];
int l, r, res;

int main()
{
    cin >> l >> r;
    for (int i = 2; i <= 1000000; i++)
        a[i] = 1;
    for (int i = 2; i <= 1000000 / 2; i++)
        for (int j = 2; j * i <= 1000000; j++)
            a[j * i] += i;
    for (int i = max(l, 2); i <= r; i++)
        if (a[i] >= l && a[i] <= r)
            if (i == a[a[i]])
                if (i <= a[i])
                    res++;
    cout << res;
}