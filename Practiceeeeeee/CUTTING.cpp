#include <iostream>
#include <stdio.h>

using namespace std;

long long n, m;

int main()
{
    freopen("CUTTING.inp","r",stdin);
    freopen("CUTTING.out","w",stdout);
    cin >> n >> m;
    cout << n * m - 1;
}