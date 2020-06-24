#include <iostream>
#include <algorithm>

using namespace std;

int a[30001];
int n,i,s,dem;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    for (i=1;i<=n;i++)
        if (a[i] > 0)
            if (a[i] <= s)
            {
                dem++;
                s=s-a[i];
            }
            else break;
    cout << dem;
}