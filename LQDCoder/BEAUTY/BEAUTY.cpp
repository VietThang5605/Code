#include <iostream>
#include <math.h>

using namespace std;

long long n,i=2,s,tg;

bool kt(long long a)
{
    if (a < 2) return false;
    for (int j=2;j<=int(sqrt(a));j++)
        if (a%j == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (n != 0)
    {
        tg=i;
        s=0;
        while (tg != 0)
        {
            s=s+(tg%10)*(tg%10);
            tg=tg/10;
        }
        if (kt(s) == true) n--;
        i++;
    }
    cout << i-1;
}