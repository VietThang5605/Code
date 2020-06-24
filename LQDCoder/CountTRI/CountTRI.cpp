#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long a[1001],b[1001],c[1001];
long long i,j,n,dem,x,y;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
        cin >> b[i];
    for (i=1;i<=n;i++)
        cin >> c[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    sort(c+1,c+1+n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            x = lower_bound(c+1,c+n+1,a[i]+b[j])-c;
            y = upper_bound(c+1,c+n+1,abs(a[i]-b[j]))-c;
            dem += x-y;
        }
    cout << dem;
}