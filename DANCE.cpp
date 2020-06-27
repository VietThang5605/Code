#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[1000001];
long long n, i, dem = 1, ans;
string s;

int main()
{
    freopen("DANCE.inp","r",stdin);
    freopen("DANCE.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> n;
    cin.ignore();
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a[i + 1] = 1;
        else
            a[i + 1] = -1;
        a[i + 1] += a[i];
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