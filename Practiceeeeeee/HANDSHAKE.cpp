#include <iostream>
#include <stdio.h>

using namespace std;

long long n;

int main()
{
    freopen("HANDSHAKE.inp","r",stdin);
    freopen("HANDSHAKE.out","w",stdout);
    cin >> n;
    cout << n * (n - 1) / 2;
}