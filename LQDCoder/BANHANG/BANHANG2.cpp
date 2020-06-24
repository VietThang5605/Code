#include <bits/stdc++.h>

using namespace std;

struct mang
{
    int x,y;
};

mang a[100001];
int n,i,k;

bool ss(mang c,mang v)
{
    if (c.x != v.x)
        return (c.x > v.x);
    else 
        return (c.y < v.y);
}

bool ss2(mang c,mang v)
{
    return (c.y < v.y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+1+n,ss);
    sort(a+1,a+1+k,ss2);
    for (i=1;i<=k;i++)
        cout << a[i].y << " ";
}