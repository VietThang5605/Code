#include <iostream>

using namespace std;

int a[11][11];
int n,i,j,s,tg,tg2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            cin >> a[i][j];
    i=1;
    for (j=1;j<=n;j++)
        s+=a[i][j];
    for (i=2;i<=n;i++)
    {
        tg=0;
        for (j=1;j<=n;j++)
            tg+=a[i][j];
        if (tg != s)
        {
            cout << "NO";
            return 0;
        }
    }
    j=0;
    tg=0;
    for (i=1;i<=n;i++)
        tg+=a[i][i];
    for (i=n;1<=i;i--)
    {
        j++;
        tg2+=a[i][j];
    }
    if (tg != s || tg2 != s) cout << "NO";
    else 
        cout << "YES";
}