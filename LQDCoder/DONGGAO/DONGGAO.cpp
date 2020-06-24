#include <iostream>
#include <algorithm>

using namespace std;

int n,j,i;

int main()
{
    cin >> n;
    if (n%__gcd(5,3) != 0)
        cout << -1;
    else 
    {
        for (i=n/5;0<=n;i--)
            if ((n-i*5)%3 == 0)
            {
                cout << i+(n-i*5)/3;
                return 0;
            }
        cout << -1;
    }
}