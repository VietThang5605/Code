#include <iostream>

using namespace std;

int a[101],b[101],c[101],d[101];
int n,i,j,m,dem,max;

int main()
{
    cin >> n >> m;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=1;i<=m;i++)
    {
        cin >> b[i];
        if (i <= n)
        {
            if (a[i] == b[i]) dem++;
            else 
            {
                j++;
                c[j]=j-dem;
                d[j]=j-1;
                dem=0;
            }
        }
    }
    
}