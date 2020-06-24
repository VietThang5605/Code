#include <iostream>

using namespace std;

int a[10000001];
int n,i,max1,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        a[tg]++;
        if (tg > max1) max1=tg;
    }
    cout << a[max1];
}