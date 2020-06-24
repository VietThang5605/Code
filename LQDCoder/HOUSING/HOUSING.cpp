#include <iostream>

using namespace std;

int n,k,i,tg1,tg2,dem = 1;

int main()
{
    cin >> n >> k;
    if (k > n) cout << "NO";
    else 
        if (k == n) cout << "YES";
        else 
        {
            cin >> tg1;
            for (i=2;i<=n;i++)
            {
                cin >> tg2;
                if (tg2 != tg1) dem++;
                tg1=tg2;
            }
            if (dem <= k) cout << "YES";
            else cout << "NO";
        }
}