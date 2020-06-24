#include <iostream>
#include <algorithm>

using namespace std;

long long a[170902];
long long s=1,n,i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    a[n]--;
    for (i=1;i<=n;i++)
        s=(s*a[i])%170901;
    cout << s;
}