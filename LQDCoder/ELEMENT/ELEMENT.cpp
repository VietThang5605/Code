#include <iostream>
#include <math.h>

using namespace std;

int a[5000];
int i,n,ucln,tg,dem;

int uc(int x,int y)
{
    int r;
    while (y != 0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    return abd(x);
}

int main()
{
    cin >> n;
    if (n == 1) cout << 0;
    else 
    {
        cin >> ucln;
        for (i=2;i<=n;i++)
        {
            cin >> tg;
            if (tg%ucln == 0) dem++;
            ucln=uc(ucln,tg);
        }
        cout << dem;
    }
}