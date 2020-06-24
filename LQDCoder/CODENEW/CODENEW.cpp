#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001];
long long n,i,dem = 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for (i=1;i<=n;i++)
        dem=dem*(a[i]-i+1)%1000000007;
    cout << dem;
}