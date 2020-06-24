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
    return (c.x < v.x);
}

mang a[100001];
long long i,n,k;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+1+n,ss);
    for (i=1;i<=n;i++)
        if (a[i].y == k) break;
    cout << i;
}