#include <iostream>

using namespace std;

int n,i,dem,max1,ii;
int a[1000001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i]%2 == 0) dem++;
        else 
        {
            if (dem > max1) 
            {
                max1=dem;
                ii=i-1;
            }
            dem=0;
        }
    }
    if (dem > max1) 
    {
        max1=dem;
        ii=n;
    }
    cout << max1 << endl;
    for (i=ii-max1+1;i<=ii;i++)
        cout << a[i] << " ";
}