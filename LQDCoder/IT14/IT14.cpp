#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int a[170902],b[170902];
int i,n,s;

int main()
{
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
        cin >> b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n, greater<int>());
    for (i=1;i<=n;i++)
        s=s+abs(a[i]+b[i]);
    cout << s;
}