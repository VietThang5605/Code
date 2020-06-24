#include <iostream>
#include <algorithm>

using namespace std;

long long a[100002];
long long n,i,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n,greater<long long>());
    i=1;
    while (i <= n)
    {
        s=s+a[i]+a[i+1];
        i=i+3;
    }
    cout << s;
}