#include <iostream>
#include <algorithm>

using namespace std;

long long a[4];
long long n,i,dem,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        a[tg%3]++;
    }
    dem+=a[0];
    tg=min(a[1],a[2]);
    dem+=tg;
    a[1]-=tg;
    a[2]-=tg;
    dem+=a[1]/3;
    dem+=a[2]/3;
    cout << dem;
}