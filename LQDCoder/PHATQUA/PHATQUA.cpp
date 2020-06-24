#include <iostream>
#include <algorithm>

using namespace std;

long long a,b,n,i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> n;
    if (n%(__gcd(a,b)) != 0)
        cout << 0;
    else 
    {
        if (a < b)
        {
            i=n/a;
            while (i >= 0)
            {
                if ((n-a*i)%b == 0)
                {
                    cout << i+(n-a*i)/b;
                    return 0;
                }
                i--;
            }
            cout << 0;
        }
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
            cout << 0;   
        }
    }
}