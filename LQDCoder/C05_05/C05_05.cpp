#include <iostream>
#include <math.h>

using namespace std;

int n,i,s;

int main()
{
    cin >> n;
    for (i=1;i<=int(sqrt(n));i++)
        if (n%i == 0)
        {
            if (i == n/i) s=s+i;
            else s=s+i+n/i;
        }
    if (s == n*2) cout << "YES";
    else cout << "NO";
}