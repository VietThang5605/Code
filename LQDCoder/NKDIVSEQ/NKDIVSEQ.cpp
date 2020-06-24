#include <iostream>

using namespace std;

long long n,i,j,tg;

int main()
{
    cin >> n;
    if (n == 1) cout << 1;
    else 
    {
        tg=1;
        n--;
        for (i=2;i <= 500000;i++)
        {
            tg=(tg/i+1)*i;
            n--;
            if (n == 0)
            {
                cout << tg;
                return 0;
            }
            else 
            {
                for (j=i-1;1<=j;j--)
                {
                    n--;
                    tg=tg+i;
                    if (n == 0)
                    {
                        cout << tg;
                        return 0;
                    }
                }
            }
        }
    }
}
    