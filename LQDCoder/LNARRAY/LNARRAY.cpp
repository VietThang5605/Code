#include <iostream>

using namespace std;

int a[100001];
int i,n,dem,q;
bool kt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while (q != 0)
    {
        kt=true;
        dem=0;
        cin >> n;
        for (i=1;i<=n;i++)
            cin >> a[i];
        for (i=2;i<n;i++)
        {
            if ((a[i] == a[i-1]) || (a[i] == a[i+1]))
            {
                kt=false;
                break;
            }
            if ((a[i] > a[i-1]) && (a[i] > a[i+1])) dem++;
            else
                if ((a[i] < a[i-1]) && (a[i] < a[i+1])) dem++;
        }
        if (a[2] < a[1]) kt=false;
        if (dem != 2) kt=false;
        if (kt == false) cout << "NO" << endl;
        else cout << "YES" << endl;
        q--;
    }
}