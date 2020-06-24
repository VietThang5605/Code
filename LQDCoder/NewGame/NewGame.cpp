#include <iostream>
#include <algorithm>

using namespace std;

struct mang
{
    long long x,y;
};

bool ss(mang c,mang v)
{
    return (c.x-c.y < v.x-v.y);
}

mang a[200001];
long long n,i,j,dem;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i].x;
    for (i=1;i<=n;i++)
        cin >> a[i].y;
    sort(a+1,a+1+n,ss);
    i=1;
    j=n;
    while (i < j)
    {
        if (a[i].x+a[j].x > a[i].y+a[j].y)
        {
            dem=dem+j-i;
            j--;
        }
        else i++;
    }
    cout << dem;
}