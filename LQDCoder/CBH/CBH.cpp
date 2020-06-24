#include <iostream>
#include <math.h>

using namespace std;

unsigned long long n,tg,s;

int main()
{
    cin >> n;
    tg=int(sqrt(n));
    if (tg*tg == n) cout << tg;
    else
    {
        while (tg != 0)
        {
            if (n%(tg*tg)==0)
            {
                cout << tg;
                return 0;
            }
            tg--;
        }
    }
    
}