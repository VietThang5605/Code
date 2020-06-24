#include <iostream>

using namespace std;

long long a[100001];
long long i,n,j,ii,max1,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    ii=n;
    j=1;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
        while (a[i]-a[j-1] > s) j++;
        if (i-j+1 > max1)
        {
            max1=i-j+1;
            ii=i;
        }
    }
    cout << max1 << endl;
    for (i=ii-max1+1;i<=ii;i++)
        cout << a[i]-a[i-1] << " ";
}
    