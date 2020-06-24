#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];
int n,i,j,m,min1 = 1000000001;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    i=1;
    j=m;
    while (j <= n)
    {
        if (a[j]-a[i] < min1)
            min1 = a[j]-a[i];
        i++;
        j++;
    }
    cout << min1;
}