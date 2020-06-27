#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

long long n, s;

int main()
{
    freopen("SCP.inp","r",stdin);
    freopen("SCP.out","w",stdout);
    cin >> n;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    if (int(sqrt(s)) * int(sqrt(s)) == s)
        cout << s;
    else
        cout << s % 11;
    
}