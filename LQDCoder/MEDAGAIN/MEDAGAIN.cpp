#include <iostream>
#include <algorithm>

using namespace std;

long long a[300005],b[300005];
long long n,i,j;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    b[1]=a[1];
    cout << b[1] << "\n";
    for (i=2;i<=n;i++)
    {
        for (j=i;2<=j;j--)
            if (a[i] >= b[j-1])
                break;
            else 
                b[j]=b[j-1];
        b[j]=a[i];
        cout << b[(i+1)/2] << "\n";
    }
}