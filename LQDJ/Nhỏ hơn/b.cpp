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
long long b[100001];
long long i,n,dem;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+1+n,ss);
    for (i=2;i<=n;i++)
        if (a[i].x != a[i-1].x)
            b[a[i].y]=i-1;
        else 
            b[a[i].y]=b[a[i-1].y];
    for (i=1;i<=n;i++)
        cout << b[i] << " ";
}