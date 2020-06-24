#include <iostream>

using namespace std;

long long a[1000001];
long long i,j = 1,n,dem,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
        while (a[i]-a[j-1] >= k)
        {
            dem=dem+n-i+1;
            j++;
        }
    }
    cout << dem;
}