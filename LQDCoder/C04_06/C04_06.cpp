#include <iostream>

using namespace std;

long long n,dem=1;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    while (n >= 1)
    {
        n-=dem;
        dem++;
    }
    if (n == 0) cout << "YES";
    else cout << "NO";
}