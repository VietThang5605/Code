#include <iostream>

using namespace std;

long long i,k,n,tg1,tg2,tg3,dem;

int main()
{
    cin >> n >> k;
    if (n < 3) cout << 0;
    else 
    {
        cin >> tg1 >> tg2;
        for (i=3;i<=n;i++)
        {
            cin >> tg3;
            if (tg1+tg2+tg3 >= k) dem++;
            tg1=tg2;
            tg2=tg3;
        }
    }
    cout << dem;
}