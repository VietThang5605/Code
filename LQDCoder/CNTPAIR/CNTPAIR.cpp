#include <iostream>
#include <algorithm>

using namespace std;

long long a[1000001];
long long n,i,j,dem,k,vt,s,d1,d2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n);
    i=1;
    j=n;
    while (i < j)
    {
        if (a[i]+a[j]==s)
        {
            if ((a[i]==s/2) && (a[j]==s/2))
            {
                vt=j-i;
                dem+=vt*(vt+1)/2;
                break;
            }
            else 
            {
                d1=0;
                d2=0;
                for (k=i;k<=n;k++)
                    if (a[k]==a[i]) d1++;
                    else break;
                i=k;
                for (k=j;1<=k;k--)
                    if (a[k]==a[j]) d2++;
                    else break;
                dem+=d1*d2;
                j=k;
            }
        }
        else 
            if (a[i]+a[j] < s) i++;
            else j--;
    }
    cout << dem;
}