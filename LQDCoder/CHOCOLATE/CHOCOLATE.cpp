#include <iostream>

using namespace std;

int a[101];
int n,i,d,m,dem;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> d;
        a[i]=a[i-1]+d;
    }
    cin >> d >> m;
    for (i=1;i<=n-m+1;i++)
        if (a[i+m-1]-a[i-1] == d) dem++;
    cout << dem;
}