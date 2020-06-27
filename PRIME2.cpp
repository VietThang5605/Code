#include <iostream>
#include <stdio.h>

using namespace std;

long long a[1000001];
long long i, j, l, r, dem;

bool kt(long long temp)
{
    long long s = 0;
    while (temp != 0)
    {
        s = s + (temp % 10) * (temp % 10);
        temp /= 10;
    }
    if (s % 2 == 0) 
        return true;
    return false;
}

int main()
{
    freopen("PRIME2.inp","r",stdin);
    freopen("PRIME2.out","w",stdout);
    cin >> l >> r;
    a[0] = a[1] = 1;
    for (i = 1; i*i <= r; i++)
        if (a[i] == 0)
            for (j = i; j*i <= r; j++)
                a[i*j] = 1;
    for (i = l; i <= r; i++)
        if (a[i] == 0)
            if (kt(i) == true)
                dem++;
    cout << dem;
}