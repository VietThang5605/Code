#include <iostream>
#include <algorithm>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    if (c.x == v.x)
        return (c.y < v.y);
    else return (c.x < v.x);
}

mang a[100001];
long long n,i,k,s,tg,min1,dem,tam,vt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+1+n,ss);
    tam=a[1].x;
    dem=1;
    min1=n+1;
    for (i=2;i<=n;i++)
        if (a[i].x == a[i-1].x) dem++;
        else
        {
            if (dem < min1)
            {
                min1=dem;
                tg=tam;
                vt=i-1;
            }
            tam=a[i].x;
            dem=1;
        }
    if (dem < min1)
    {
        min1=dem;
        tg=tam;
        vt=n;
    }
    cout << n*s-min1*k << " " << min1 << endl;
    for (i=vt-min1+1;i<=vt;i++)
        cout << a[i].y << " ";
}