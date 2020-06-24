#include <iostream>

using namespace std;

long long n,dem,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    tg=n;
    while (tg > 0)
    {
        if (tg%10 == 0)
        {
            tg/=10;
            continue;
        }
        if (n%(tg%10) == 0)
            dem++;
        tg/=10;
    }
    cout << dem;
}