#include <iostream>
#include <stdio.h>

using namespace std;

long long r, c;

int main()
{
    //freopen("GIRD.inp","r",stdin);
    //freopen("GIRD.out","w",stdout);
    cin >> r >> c;
    r = (((r + 1) / 2) - 1) * 10 + (r + 1) % 2;
    cout << r + (c - 1) * 2;
}