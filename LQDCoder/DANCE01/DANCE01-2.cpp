#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001];
long long n,i,k,dem;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;++i)
        cin >> a[i];
    sort(a+1,a+1+n);
    for (i=1;i<=n;++i)
        if (binary_search(a+1+i,a+1+n,a[i]+k) == true) dem++;
    cout << dem;
}