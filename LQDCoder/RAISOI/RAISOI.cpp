#include <iostream>

using namespace std;

long long a[101];
long long n,i,j,max1,tg;

int main()
{
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
    {
        tg=i;
        j=a[i]%n;
        while (j != 0)
        {
            tg=tg-1;
            if (tg < 1) tg=n;
            j--;
        }
        tg=tg-1;
        if (tg < 1) tg=n;
        if (a[tg]+a[i]/n > max1) 
            max1 = a[tg]+a[i]/n;
        tg=i;
        j=a[i]%n;
        while (j != 0)
        {
            tg=tg+1;
            if (tg > n) tg=1;
            j--;
        }
        tg=tg+1;
        if (tg > n) tg=1;
        if (a[tg]+a[i]/n > max1) 
            max1 = a[tg]+a[i]/n;
    }
    cout << max1;
}
    