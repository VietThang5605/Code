#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

struct mang
{
    long long x, y, z;
};

mang a[1000001];
long long n, i, k;

bool cmp1(mang c, mang v)
{
    if (c.x == v.x)
        return (c.z < v.z);
    return (c.x > v.x);
}

bool cmp2(mang c, mang v)
{
    if (c.y == v.y)
        return (c.z < v.z);
    return (c.y > v.y);
}

void read()
{
    scanf("%lld", &n);
    scanf("%lld", &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i].x);
        scanf("%lld", &a[i].y);
        a[i].z = i;
    }
}

void solve1()
{
    sort(a + 1, a + 1 + n, cmp1);
    for (i = 1; i <= k; i++)
        printf("%lld ",a[i].z);
    cout << endl;
}

void solve2()
{
    sort(a + 1, a + 1 + k, cmp2);
    for (i = 1; i <= k; i++)
        printf("%lld ",a[i].z);
}

int main()
{
    freopen("death.inp","r",stdin);
    freopen("death.out","w",stdout);
    read();
    solve1();
    solve2();
}