#include <iostream>

using namespace std;

int a[100005];
int n, i, res, q, l, r;

int main()
{
    cin >> n >> q;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        cin >> l >> r;
        res = a[l];
        for (i = l + 1 ; i <= r; i++)
            res ^= a[i];
        cout << res << "\n";
    }
}