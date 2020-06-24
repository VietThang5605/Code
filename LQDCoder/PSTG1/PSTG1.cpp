#include <iostream>

using namespace std;

long long n,i,dem;

int main()
{
    cin >> n;
    if (n == 1) cout << 0;
    else 
    {
        dem=n;
        for (i=2;i*i<=n && n != 1;i++)
            if (n%i == 0)
            {
                dem-=dem/i;
                while (n%i == 0) n=n/i;
            }
        if (n > 1) dem-=dem/n;
        cout << dem;
    }
}