#include <iostream>
#include <algorithm>

using namespace std;

long long a[401];
long long n,i,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=4*n;i++)
        cin >> a[i];
    sort(a+1,a+1+n*4);
    s=a[1]*a[4*n];
    for (i=2;i<=n*2;i++)
        if (a[i]*a[n*4-i+1] != s)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
}