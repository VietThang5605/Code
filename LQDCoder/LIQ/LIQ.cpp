#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int a[1001],dp[1001];
int n,i,j,max1=1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        dp[i]=1;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
            if (a[j] > a[i]) 
                dp[j]=max(dp[i]+1,dp[j]);
        if (dp[i] > max1) max1=dp[i];
    }
    cout << max1;
}