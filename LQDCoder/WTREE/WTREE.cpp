#include <iostream>

using namespace std;

long long a[1000001];
long long n,m,i,j = 1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (i=1;i<=n;i++)
        a[i]=i+a[i-1];
    for (i=1;i<=n;i++)
    {
        while (a[i]-a[j-1] > m) j++;
        if (a[i]-a[j-1] == m)
        {
            cout << j << " " << i;
            return 0;
        }
    }
    cout << -1;
}