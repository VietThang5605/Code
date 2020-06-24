#include <iostream>
#include <algorithm>

using namespace std;

long long n, dem, tg, s;

int main()
{
    cin >> n;
    while (n != 0)
    {
        dem++;
        tg = n;
        s = 1;
        while (tg > 0)
        {
            s = s * 2;
            tg = tg / 2;
        }
        n = min(s - n, n - (s / 2));
    }
    cout << dem;
}