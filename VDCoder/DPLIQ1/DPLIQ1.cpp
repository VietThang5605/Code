#include <iostream>
#include <algorithm>

using namespace std;

int a[5001],dp[5001];
int n,i,j,dmax;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        dp[i]=1;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
            if (a[j] > a[i])
                dp[j]=max(dp[j],dp[i]+1);
        if (dp[i] > dmax) dmax=dp[i];
    }
    cout << dmax;
}