#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

long long a[2001];
long long n,i,j,k,trai,phai,dem;

int tk(int l,int r,long long m)
{
    int mid=(l+r)/2;
    while ((a[mid] != m) && (l != r))
    {
        if (a[mid] = m)
            return mid;
        if (a[mid] > m)
            r=mid-1;
        else l=mid+1;
        mid=(l+r)/2;
    }
    if (a[mid] = m)
        return mid;
    else return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (abs(a[i]-a[j]) < a[n])
                if (a[i]+a[j] > a[1])
                {
                    trai=tk(j+1,n,abs(a[i]-a[j]));
                    if ((trai == 0) || (trai == j) || (trai == i)) break;
                    phai=tk(j+1,n,a[i]+a[j]);
                    if ((phai == 0) || (phai == i) || (phai == j)) break;
                    if (phai >= trai)
                        dem=dem+phai-trai+1;
                }
    cout << dem;
}