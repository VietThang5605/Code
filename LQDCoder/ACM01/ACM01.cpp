#include <iostream>
#include <algorithm>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    if (c.y-c.x == v.y-v.x)
        return (c.y < v.y);
    else
        return (c.y-c.x < v.y-v.x);
}

mang a[800001];
long long n,i,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n*2;i++)
        cin >> a[i].x >> a[i].y;
    sort(a+1,a+1+n*2,ss);
    for (i=1;i<=n;i++)
        s=s+a[i].y;
    for (i=n+1;i<=2*n;i++)
        s=s+a[i].x;
    cout << s;
}
    