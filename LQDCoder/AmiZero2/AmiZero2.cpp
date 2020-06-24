#include <iostream>

using namespace std;

long long x,q,l,r,t,k,tg,i,dem;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while (q != 0)
    {
        cin >> l >> r >> t >> k;
        if (k%t != 0) cout << 0 << "\n";
        else 
            if (k/t > 17) cout << 0 << "\n";
            else
            {
                tg=1;
                for (i=1;i<=k/t;i++)
                    tg=tg*10;
                dem=r/tg-(l-1)/tg;
                while (tg <= r)
                {
                    tg=tg*10;
                    dem=dem-((r/tg)-(l-1)/tg);
                    dem=dem+((r/(tg*10))-(l-1)/(tg*10));
                }
                cout << dem << "\n";
            }
        q--;
    }
}