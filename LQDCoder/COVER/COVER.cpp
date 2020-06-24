#include <bits/stdc++.h>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
        return (c.x < v.x);
}

mang a[10001];
long long n,i,tam,dem,max1,tg;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i].x >> a[i].y;
    sort(a+1,a+1+n,ss);
    tam=a[1].y;
    dem+=a[1].y-a[1].x;
    for (i=2;i<=n;i++)
    {
        if (a[i].x <= tam)
        {
            if (a[i].y > tam)
            {
                dem+=a[i].y-tam;
                tam=a[i].y;
            }
        }
        else 
        {
            if (dem > max1) max1=dem;
            dem=a[i].y-a[i].x;
            tam=a[i].y;
        }
    }
    if (dem > max1) max1=dem;
    cout << max1;
}
