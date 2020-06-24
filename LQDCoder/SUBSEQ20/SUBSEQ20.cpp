#include <iostream>

using namespace std;

long long a[100001];
long long i,n,j = 1,min1,s;

int main()
{
    cin >> n >> s;
    min1=n+1;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
        while (a[i]-a[j-1] >= s)
        {
            if (i-j+1 < min1)
                min1=i-j+1;
            j++;
        }
    }
    if (min1 == n+1) cout << 0;
    else cout << min1;
}