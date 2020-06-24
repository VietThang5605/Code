#include <iostream>
#include <algorithm>

using namespace std;

int a[100001],b[100001];
int n,m,i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    if (m > n) cout << "NO";
    else
    {
        for (i=1;i<=m;i++)
            cin >> a[i];
        for (i=1;i<=n;i++)
            cin >> b[i];
        sort(a+1,a+1+m);
        sort(b+1,b+1+n);
        for (i=1;i<=m;i++)
            if (a[i] <= b[i])
            {
                cout << "NO";
                return 0;
            }
        cout << "YES";
    }
}