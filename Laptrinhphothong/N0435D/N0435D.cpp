#include <bits/stdc++.h>

using namespace std;

long long a[1000005], b[1000005], c[1000005];
long long n, ans = -9999999999, minn, maxx;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    cin >> a[1] >> a[2];
    minn = min(a[1], a[2]);
    maxx = max(a[2], a[1]);
    for (int i = 3; i <= n ; i++)
    {
        cin >> a[i];
        ans = max(ans, maxx + minn - a[i]);
        if (a[i] > maxx)
        {
            minn = maxx;
            maxx = a[i];
        }
        else
            if (a[i] > minn)
                minn = a[i];
    }
    cout << ans;
}
    