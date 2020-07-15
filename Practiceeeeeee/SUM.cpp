#include <iostream>
#include <stdio.h>

using namespace std;

long long n;

int main()
{
    freopen("SUM.inp","r",stdin);
    freopen("SUM.out","w",stdout);
    cin >> n;
    n = n * n - (n - 1) * (n - 1);
    cout << ((n - 1) / 2 + 1) * (n + 1) / 2;
}