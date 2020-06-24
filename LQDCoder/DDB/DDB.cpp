#include <iostream>

using namespace std;

bool a[2000002];
int b[2000002];
int n,i,j,dem,t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    a[1]=true;
    a[0]=true;
    for (i=2;i<=2000002;i++)
    {
        if (a[i]==false)
        {
            dem++;
            for (j=2;j*i<=2000002;j++)
                a[j*i]=true;
        }
        b[i]=dem;
    }
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        cout  << b[2*n]-b[n] << "\n";
        t--;
    }
}
    