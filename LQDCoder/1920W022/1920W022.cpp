#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001],b[100001];
long long i,j,n,s,m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=m;i++)
        cin >> b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    i=1;
    j=m;
    s=abs(a[i]+b[j]);
    while (i <= n && j >= 1)
    {
        if (s > abs(a[i]+b[j])) s=abs(a[i]+b[j]);
        if (a[i]+b[j] >= 0) j--;
        else
            i++;
    }
    cout << s;
}