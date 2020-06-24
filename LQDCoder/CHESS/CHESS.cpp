#include <iostream>
#include <algorithm>

using namespace std;

int  a,b,n,i;

int main()
{
    cin >> n >> a >> b;
    if (n%(__gcd(a,b)) != 0)
        cout << -1;
    else 
    {
        i=n/b;
        while (i >= 0)
        {
            if ((n-b*i)%a == 0)
            {
                cout << i+(n-b*i)/a;
                return 0;
            }
            i--;
        }
        cout << -1;
    }
}