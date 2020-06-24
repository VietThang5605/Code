#include <iostream>
#include <algorithm>

using namespace std;

int a[1001];
int i,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    cout << a[(n+1)/2];
}