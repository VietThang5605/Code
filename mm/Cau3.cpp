#include <iostream>
#include <stdio.h>

using namespace std;

long long a[100001];
long long n, i, ans, m, temp, ii;

void read()
{
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        cin >> temp;
        a[i] += temp + a[i - 1];
    }
}

void solve()
{
    ans = a[m];
    ii = m;
    for (i = m + 1; i <= n; i++)
        if (a[i] - a[i - m] > ans)
    {
        ans = a[i] - a[i - m];
        ii = i;
    }
    for (i = ii - m + 1; i <= ii; i++)
        cout << a[i] - a[i - 1] << " ";
}

int main()
{
    freopen("Cau3.inp","r",stdin);
    freopen("Cau3.out","w",stdout);
    read();
    solve();    
}