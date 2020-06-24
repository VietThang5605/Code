#include <iostream>
#include <algorithm>

using namespace std;

long long a[1000001];
long long n,i,dem,tg;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<n;i++)
    {
        dem+=a[i]/2;
        a[i]-=a[i]/2*2;
        tg=min(a[i],a[i+1]);
        dem+=tg;
        a[i]-=tg;
        a[i+1]-=tg;
    }
    dem+=a[n]/2;
    cout << dem;
}