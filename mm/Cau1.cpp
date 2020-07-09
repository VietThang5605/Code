#include <iostream>
#include <stdio.h>

using namespace std;

long long n, s1, s2;

int main()
{
    freopen("Cau1.inp","r",stdin);
    freopen("Cau1.out","w",stdout);
    cin >> n;
    s1 = n / 2;
    s2 = n % 2;
    if (s1 + s2 > 100)
        cout << 100 * 300 + (s1 - 100) * 280 + s2 * 220;
    else 
        cout << s1 * 300 + s2 * 250;
}