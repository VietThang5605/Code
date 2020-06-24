#include <iostream>
#include <math.h>

using namespace std;

long long a[1000001];
long long n,i,d,min1 = LLONG_MAX,tong;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
    }
    for (i=2;i<=n;i++)
    {
        tong=abs(a[i-1]-(a[n]-a[i-1]));
        if (tong < min1) 
        {
            min1=tong;
            d=i-1;
        }
    }
    cout << d;
}