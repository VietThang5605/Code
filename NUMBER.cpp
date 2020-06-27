#include <iostream>
#include <stdio.h>

using namespace std;

long long n, s;

int main()
{
    freopen("NUMBER.inp","r",stdin);
    freopen("NUMBER.out","w",stdout);
    cin >> n;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    (s % 7 == 0) ? cout << s: cout << s % 7;

}