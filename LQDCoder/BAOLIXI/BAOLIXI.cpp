#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001];
long long n,i,tong,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n, greater <int> ());
    for (i=1;i<=k;i++)
        tong+=a[i];
    cout << tong;
}