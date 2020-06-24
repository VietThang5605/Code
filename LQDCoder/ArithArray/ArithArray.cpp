#include <iostream>

using namespace std;

int n,i,dem,d,max1;
int a[3000001],b[101],c[101],j;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
        for (i=1;i<=n-1;i++)
            if (a[i] <= a[i+1])
            {
                dem=2;
                d=a[i+1]-a[i];
                for (j=i+1;j<=n-1;j++)
                {
                    if (a[i+1] >= a[i])
                    {
                        if (a[j+1]-a[j]==d) dem++;
                        else break;
                    }
                    else break;
                }
                if (dem > b[d])
                    b[d]=dem;
                i=j-1;
            }
        for (i=0;i<=100;i++)
            if (b[i] > 0)
                cout << i << " " << b[i] << endl;
}
    