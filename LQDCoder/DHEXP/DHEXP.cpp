#include <iostream>
#include <algorithm>

using namespace std;

long long a[1000001];
long long s,i,n,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+2,a+1+n,greater<long long>());
    s=a[1];
    for (i=2;i<=1+k;i++)
        s=s+a[i];
    for (i=1+k+1;i<=n;i++)
        s=s-a[i];
    cout << s;
}