#include <iostream>

using namespace std;

long long a = 2,b = 4,c = 7,i,n,dem,t,m,e;
long long d[10000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    if (n == 1) cout << 1%m;
    else 
        if (n == 2) cout << 2%m;
        else 
        {
            dem=5;
            d[0]=1;
            d[1]=1;
            d[2]=2;
            d[3]=4;
            d[4]=7;
                if (m != 1)
                for (i=5;(a != 1) || (b != 1) || (c != 2);i++)
                {
                    dem++;
                    e=(a+b+c)%m;
                    a=b%m;
                    b=c%m;
                    c=e%m;
                    d[i]=e;
                }
            n=n%(dem-3);
            cout << d[n] << "\n";
        }
}