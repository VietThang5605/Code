#include <iostream>
#include <math.h>

using namespace std;

long long n,i,tong;

bool kt(long long a)
{
    if (a < 2) return false;
    for (long long j = 2;j<=int(sqrt(a));j++)
        if (a%j == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=int(sqrt(n));i++)
        if (n%i == 0)
        {
            if (i != n/i)
            {
                if (kt(i) == true) tong=tong+i;
                if (kt(n/i) == true) tong=tong+n/i;
            }
            else 
                if (kt(i) == true) tong=tong+i;
        }
    cout << tong;
}