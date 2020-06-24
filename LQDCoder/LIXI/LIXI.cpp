#include <iostream>
#include <algorithm>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    if (c.y == v.y) 
        return c.x > v.x;
    else
        return c.y > v.y;
}

mang a[101];
long long n,i,dem=1,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i].x;
        cin >> a[i].y;
    }
    sort(a+1,a+1+n,ss);
    for (i=1;(i<=n)&&(dem != 0);i++)
    {
        s=s+a[i].x;
        dem=dem-1+a[i].y;
    }
    cout << s;
}