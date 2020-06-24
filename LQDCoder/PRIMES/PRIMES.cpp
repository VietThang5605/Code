#include <iostream>
#include <math.h>

using namespace std;

int a[10001];
int n,i,max1;

bool kt(int m)
{
    if (m < 2) return false;
    for (int j = 2;j <= int(sqrt(m));j++)
        if (m%j == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        if ((kt(a[i]) == true) && (a[i] > max1))
            max1=a[i];
    }
    cout << max1 << endl;
    for (i=1;i<=n;i++)
        if (a[i] == max1)
            cout << i << " ";
}
    