#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long t, h, w;

int main()
{
    //freopen("RESTAURANT.inp","r",stdin);
    //freopen("RESTAURANT.out","w",stdout);
    ios::sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        cin >> h >> w;
        cout << h / __gcd(h, w) * (w / __gcd(h, w)) << "\n";
    }
}