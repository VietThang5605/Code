#include <iostream>
#include <stdio.h>

using namespace std;

long long n, m;

int main()
{
    freopen("GAME.inp","r",stdin);
    freopen("GAME.out","w",stdout);
    cin >> n >> m;
    cout << ((n + 1) / 2) * ((m + 1) / 2);
}