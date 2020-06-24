#include <iostream>
#include <algorithm>

using namespace std;

int a,b,i,dem;

int dao(int n)
{
    int s=0;
    while (n > 0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> a >> b;
    for (i=a;i<=b;i++)
        if (__gcd(i,dao(i)) == 1) dem++;
    cout << dem;
}