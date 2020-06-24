#include <iostream>

using namespace std;

long long a[1000001];
long long n,i,dmax=0,s,j;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> s;
        a[s]++;
    }
    for (i=2;i<=1000000;i++)
    {
        s=0;
        for (j=1;j*i<=1000000;j++)
            s+=a[i*j];
        if (s > dmax) dmax=s;
    }
    cout << dmax;
}