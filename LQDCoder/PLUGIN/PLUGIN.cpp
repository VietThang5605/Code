#include <iostream>
#include <algorithm>

using namespace std;

long long a[10001];
long long n,s,dem,i,tong;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n,greater<long long>());
    dem++;
    tong=tong+a[1];
    if (tong >= s) cout << dem;
    else 
    {
        for (i=2;i<=n;i++)
        {
            dem++;
            tong=tong-1+a[i];
            if (tong >= s)
            {
                cout << dem;
                return 0;
            }
        }
        cout << -1;
    }
}
    