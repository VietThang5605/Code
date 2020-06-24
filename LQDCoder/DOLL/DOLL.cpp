#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001];
long long n,i,s,j = 1,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n,greater<long long>());
    for (i=1;i<=n;i++)
        if (a[i]+k <= a[j]) j++;
        else s=s+a[i];
    cout << s;
}