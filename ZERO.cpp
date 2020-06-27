#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int a[1000001];
int n, i, dem = 1, ans;

int main()
{
    freopen("ZERO.inp","r",stdin);
    freopen("ZERO.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    sort(a, a + 1 + n);
    for (i = 1; i <= n; i++)
        if (a[i] == a[i - 1])
            dem++;
        else
        {
            ans = ans + dem * (dem - 1) / 2;
            dem = 1; 
        }
    ans = ans + dem * (dem - 1) / 2;
    cout << ans;        
}