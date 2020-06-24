#include <iostream>
#include <algorithm>
using namespace std;

long long n,i,t1,t2;

int main()
{
    cin >> n;
    t1=1;
    t2=n;
    for (i=1;i*i<=n;i++)
        if (n%i == 0)
            if ((i+n/i) < t1+t2 && (i*(n/i))/__gcd(i,n/i) == n)
        {
            t1=i;
            t2=n/i;
        }
    if (t1 < t2)
        cout << t1 << " " << t2;
    else 
        cout << t2 << " " << t1;
}