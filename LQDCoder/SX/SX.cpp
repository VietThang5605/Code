#include <iostream>

using namespace std;

long long a[1000002];
long long n, m, i, t, tg, dem;

int main()
{
    cin >> n >> m >> t;
    a[0] = n / m;
    for (i = 1; a[i-1] < n; i++)
    {
        if (i <= n%m)
            tg = n-n%m+i;
        else
            tg = n-n%m-(m-i);
        a[i] = a[i-1]+(tg-i)/m+1;
    }
    for (i=0;;i++)
        if (t <= a[i]) break;
    if (i == 0)
        cout << m*t;
    else 
        cout << i+m*(t-a[i-1]-1);
}