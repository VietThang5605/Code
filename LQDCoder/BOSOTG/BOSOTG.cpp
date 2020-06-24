#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long a[5001];
long long i,j,n,dem,x,y;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for(i=1;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
        {
            x = lower_bound(a+1+j,a+n+1,a[i]+a[j])-a;
            y = upper_bound(a+1+j,a+n+1,abs(a[i]-a[j]))-a;
            dem += x-y;
        }
    cout << dem;
}