#include <iostream>
#include <string.h>

using namespace std;

char tg;
int n;

int main()
{
    cin >> n;
    tg = getchar();
    while (n != 0)
    {
        tg = getchar();
        if ((tg >= 'a') && (tg <= 'z'))
        {
            cout << tg;
            n--;
        }
        else 
            if (tg == '*')
            {
                n=n-1;
                tg=getchar();
                while ((tg != '*') && (n != 0))
                {
                    tg=getchar();
                    n--;
                };
            }
            else n--;
    }
}
    