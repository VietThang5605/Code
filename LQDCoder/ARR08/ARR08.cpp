#include <iostream>

using namespace std;

long long a[20001],b[20001];
int i,j,n,s,max1,ii;

int main()
{
    cin >> n >> s;
    j=1;
    for (i=1;i<=n;i++)
    {
        cin >> b[i];
        a[i]=b[i]+a[i-1];
        while (a[i]-a[j-1] > s) j++;
        if (i-j+1 > max1)
        {
            max1=i-j+1;
            ii=i;
        }
    }
    cout << max1 << endl;
    for (i=ii-max1+1;i<=ii;i++)
        cout << b[i] << " ";
}