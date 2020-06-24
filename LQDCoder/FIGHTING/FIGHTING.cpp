#include <iostream>
#include <algorithm>

using namespace std;

int a[100001],b[100001];
int n,i,dem,j;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
        cin >> b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    j=1;
    for (i=1;i<=n;i++)
        if (b[i] > a[j])
        {
            dem++;
            j++;
        }
    cout << dem;
}