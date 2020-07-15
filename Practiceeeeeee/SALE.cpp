#include <iostream>
#include <stdio.h>

using namespace std;

long long n, k, p;

int main()
{
    //freopen("SALE.inp","r",stdin);
    //freopen("SALE.out","w",stdout);
    cin >> n >> k >> p;
    if (n <= k + 1)
    {
        if (k + 1 == n)
            cout << k * p;
        else
            cout << n * p;
    }
    else 
        cout << (n - (n / (k + 1))) * p;
}