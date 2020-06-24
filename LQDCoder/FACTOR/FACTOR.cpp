#include <iostream>
#include <math.h>

using namespace std;

int n,i,dem=1,tg;

bool kt(int m)
{
    for (int j =2;j<=sqrt(m);j++)
        if (m%j == 0)
            return false;
    return true;
}

int main()
{
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else
    {
        if (kt(n) == true)
        {
            cout << n << endl;
            cout << 2;
        }
        else 
        {
            for (i=2;(i<=n) && (n != 1);i++)
            {
                tg=0;
                while (n%i == 0)
                {
                    cout << i;
                    n=n/i;
                    tg++;
                    if (n!=1) cout << "*";
                }
                dem=dem*(tg+1);
            }
                cout << endl;
                cout << dem;
        }
    }
    
}