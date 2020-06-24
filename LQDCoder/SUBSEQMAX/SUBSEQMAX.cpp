#include <iostream>

using namespace std;

long long a[1000001];
long long i,n,max1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> max1;
    a[1]=max1;
    for (i=2;i<=n;i++)
    {
        cin >> a[i];
        if (a[i-1] > 0)
            a[i]=a[i-1]+a[i];
        if (a[i] > max1) max1=a[i];
    }
    cout << max1;
}