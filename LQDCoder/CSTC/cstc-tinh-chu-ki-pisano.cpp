#include <iostream>

using namespace std;

long long a,b,i,m,c,n,tg1,tg2,dem;

int main()
{
    cin >> n;
            tg1=0;
            tg2=1;
            a=1;
            b=1;
            dem=3;
            for (i=3;(a != tg1) || (b != tg2);i++)
            {
                dem++;
                c=(a+b)%100;
                a=b%100;
                b=c%100;
            }
            n=n%(dem-2);
            c=0;
            if (n == 1 || n == 2) cout << 1;
            else 
            {
                a=b=1;
                for (i=3;i<=n;i++)
                {
                    c=(a+b)%100;
                    a=b%100;
                    b=c%100;
                }
                cout << c;
            }
}