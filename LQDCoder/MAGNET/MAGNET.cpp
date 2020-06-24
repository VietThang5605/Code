#include <iostream>

using namespace std;

int n,i,dem=1,tg1,tg2;

int main()
{
    cin >> n;
    cin >> tg1;
    for (i=2;i<=n;i++)
    {
        cin >> tg2;
        if (tg2 != tg1) dem++;
        tg1=tg2;
    }
    if (dem == 1) cout << 0;
    else cout << dem;
}