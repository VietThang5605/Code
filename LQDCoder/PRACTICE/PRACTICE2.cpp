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
        return c.y > v.y;
    else 
        return c.x < v.x;
}

mang a[100001];
long long n,i,dem,s;

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
        if (s-a[i].x >= 0)
        {
            s=s+a[i].y;
            dem++;
        }
        else break;
    cout << dem;
}
    