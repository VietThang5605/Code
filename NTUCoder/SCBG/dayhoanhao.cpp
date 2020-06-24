#include <iostream>
#include <algorithm>
using namespace std;

int a[100009],dp[100001],f[100001],n,k;
int j = 0;
int main()
{
    cin >> n >>k;
    for (int i=1; i<=n; i++)
        cin >> a[i];
    int j=1;
    f[1] = a[1];
    for (int i=2; i<=n; i++)
        f[i] = f[i-1] + a[i];
    for (int i=1; i<=n; i++)
    {
        while (f[i] - f[j] >=k && j<i)
        {
            dp[i] = max(dp[i],(f[i]-f[j])/(i-j));
            j++;
        }
        j--;
    }
    cout << *max_element(dp+1,dp+1+n);
    return 0;
}