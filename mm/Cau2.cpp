#include <iostream>
#include <stdio.h>

using namespace std;

long long ans = 1, n;

int main()
{
    freopen("Cau2.inp","r",stdin);
    freopen("Cau2.out","w",stdout);
    cin >> n;
    while (n--)
        ans *= 2;
    cout << ans;
}