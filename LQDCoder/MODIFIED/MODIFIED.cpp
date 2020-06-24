#include <iostream>
#include <algorithm>

using namespace std;

long long n,i,k,s,dem;
long long a[100001];

int main()
{
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        s=s+a[i];
    }
    sort(a+1,a+1+n);
    if (s < k) cout << "-1";
    else 
        if (s == k) cout << 0;
        else 
        {
            for (i=n;1<=i;i--)
            {
                dem++;
                s=s-a[i]+1;
                if (s <= k)
                {
                    cout << dem;
                    return 0;
                }
            }
        }
}