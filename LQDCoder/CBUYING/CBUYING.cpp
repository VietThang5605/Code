#include <iostream>
#include <algorithm>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    return (c.x < v.x);
}

mang a[100001];
long long i,n,dem,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
        cin >> a[i].x >> a[i].y;
    sort(a+1,a+1+n,ss);
    for (i=1;i<=n;i++)
    {
        dem=dem+min(s/a[i].x,a[i].y);
        s=s-min(s/a[i].x,a[i].y)*a[i].x;
    }
    cout << dem;
}
    