#include <iostream>

using namespace std;

long long a[100001];
int i,j,n,s,min1,ii;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    j=1;
    min1=n+1;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
        while (a[i]-a[j-1] >= s)
        {
            if (i-j+1 <= min1)
            {
                min1=i-j+1;
                ii=i;
            }
            j++;
        }
    }
    cout << min1 << endl;
    for (i=ii-min1+1;i<=ii;i++)
        cout << a[i]-a[i-1] << " ";
}
    