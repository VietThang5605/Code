#include <iostream>

using namespace std;

int a[1000001];
int n,m,i,j,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            a[i*j]++;
    for (i=1;i<=m*n;i++)
        while (a[i] > 0)
        {
            k--;
            a[i]--;
            if (k == 0)
            {
                cout << i;
                return 0;
            }
        }
}