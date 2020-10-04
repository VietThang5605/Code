#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[100005], b[100005];
long long s, n, i, ans, vt, k;
bool ok;

int main()
{
    freopen("maxsgifts.inp","r",stdin);
    freopen("maxsgifts.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i] + b[i - 1];
    }
    for (i = 1; i <= n; i++)
    {
        if (ok == false && a[i] == k)
        {
            s += a[i];
            ok = true;
            vt = i;
        }
        else 
            if (a[i] == k && ok == true)
            {
                ans = max(s, ans);
                s = b[i] - b[vt];
                vt = i;
            }
            else 
                if (a[i] < k)
                {
                    if (ok == true)
                        ans = max(ans, s);
                    s = 0;
                    ok = false;
                }
                else
                    s += a[i];
    }
    if (ok == true)
        ans = max(ans, s);
    cout << ans;
}