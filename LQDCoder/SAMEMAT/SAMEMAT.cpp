#include <iostream>

using namespace std;

int a[1000001],b[1000001];
int n,m,i,j,tg;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
        {
            cin >> tg;
            a[tg]++;
        }
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
        {
            cin >> tg;
            b[tg]++;
        }
    for (i=0;i<=1000000;i++)
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
}