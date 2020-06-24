#include <iostream>
#include <math.h>

using namespace std;

long long n,i;
long long a[10001],b[10001],max1;

long long kt(long long m)
{
    int d = 0;
    for (long long j=1;j*j<=m;j++)
        if (m%j == 0)
            d+=2;
    if ((int)(sqrt(m))*(int)(sqrt(m)) == m) d--;
    return d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=kt(a[i]);
        if (b[i] > max1) max1=b[i];
    }
    cout << max1 << endl;
    for (i=1;i<=n;i++)
        if (b[i] == max1) cout << a[i] << " ";
}