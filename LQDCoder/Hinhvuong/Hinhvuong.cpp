#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    if (c.x == v.x) return c.y < v.y;
    else
    return (c.x < v.x);
}

mang a[5];
long long i,ab,ad,bc,cd;

int main()
{
    for (i=1;i<=4;i++)
        cin >> a[i].x >> a[i].y;
    sort(a+1,a+1+4,ss);
    if ((a[1].x == a[2].x) && (a[3].x == a[4].x) && (a[1].y == a[3].y) && (a[2].y == a[4].y))
    {
        ab=sqrt((a[1].x-a[2].x)*(a[1].x-a[2].x)+(a[1].y-a[2].y)*(a[1].y-a[2].y));
        ad=sqrt((a[1].x-a[3].x)*(a[1].x-a[3].x)+(a[1].y-a[3].y)*(a[1].y-a[3].y));
        bc=sqrt((a[4].x-a[2].x)*(a[4].x-a[2].x)+(a[4].y-a[2].y)*(a[4].y-a[2].y));
        cd=sqrt((a[3].x-a[4].x)*(a[3].x-a[4].x)+(a[3].y-a[4].y)*(a[3].y-a[4].y));
        if ((ab == ad) && (ad == bc) && (bc == cd))
            cout << ab*ab;
        else cout << -1;
    }
    else cout << -1;
}