#include <iostream>
#include <stdio.h>

using namespace std;

long long n, m;

int main()
{
    freopen("TRIANGLE.inp","r",stdin);
    freopen("TRIANGLE.out","w",stdout);
    cin >> n >> m;
    if (m * 2 % n == 0)
        cout << m * 2 / n;
    else 
        cout << m * 2 / n + 1;
}