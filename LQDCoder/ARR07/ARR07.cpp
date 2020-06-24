#include <iostream>

using namespace std;

long long a[10001];
int i,j,n,s,min1,ii,b[10001];

int main()
{
    cin >> n >> s;
    j=1;
    min1=n+1;
    for (i=1;i<=n;i++)
    {
        cin >> b[i];
        a[i]=b[i]+a[i-1];
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
        cout << b[i] << " ";
}