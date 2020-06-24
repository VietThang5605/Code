#include <iostream>

using namespace std;

long long RV(long long a)
{
    if (a <= 5) return a;
    long long s=0;
    while (a != 0)
    {
        s=s+a%10;
        a=a/10;
    }
    return RV(s/2);
}

int main()
{
    long long n;
    cin >> n;
    cout << RV(n);
}