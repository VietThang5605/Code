#include <iostream>

using namespace std;

long long n,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    while (n > 0)
    {
        if (n%10 > tg) tg=n%10;
        n/=10;
    }
    cout << tg;
}