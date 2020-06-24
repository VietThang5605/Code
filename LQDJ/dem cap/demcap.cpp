#include <iostream>
#include <math.h>

using namespace std;

long long a[100001],b[31623];
long long i,n,k,tg,dem,temp;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i] < k)
            if (a[i] < 31623)
                b[a[i]]++;
    }
    for (i=1;i<=n;i++)
    {
        if (a[i] < k)
        {
            tg=k-a[i];
            temp=(int)(sqrt(tg));
            if (temp*temp == tg)
                dem+=b[temp];
        }
        b[a[i]]--;
    }
    cout << dem;
}