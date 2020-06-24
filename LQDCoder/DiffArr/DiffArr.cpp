#include <iostream>

using namespace std;

int a[100002];
int n,i,tg,dem,max1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        if (tg > max1) max1 = tg;
        a[tg]++;
    }
    if (a[1] == 1) dem++;
    else
        if (a[1] > 1)
        {
            a[1]--;
            a[2]++;
            dem++;
        }
    for (i=2;i<=max1+1;i++)
    {
        if ((a[i-1]==0) && (a[i] > 0))
        {
            a[i-1]++;
            a[i]--;
            dem++;
            if (a[i] == 1)
            {
                dem++;
                continue;
            }
            if (a[i] > 1)
            {
                dem++;
                a[i+1]++;
            }
        }
        else
            if (a[i] == 1) dem++;
            else 
                if (a[i] > 1)
                {
                    dem++;
                    a[i+1]++;
                }
    }
    cout << dem;
}