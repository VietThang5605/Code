#include <iostream>

using namespace std;

int a[10000001];
int n,j,i,dem,max1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<n;i++)
    {
        if (a[i] < a[i+1])
        {
            while ((a[i] < a[i+1]) && (i <= n-1))
            {
                dem++;
                i++;
            }
            while ((a[i] > a[i+1]) && (i <= n-1))
            {
                dem++;
                i++;
            }
            if (a[i-1] > a[i]) dem++;
            if (dem > max1) max1 = dem;
            dem=0;
            i=i-1;
        }
    }
    cout << max1;
}