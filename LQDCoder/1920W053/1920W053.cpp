#include <iostream>

using namespace std;

long long a[100001];
long long i,n,j,s,dem,k=1;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    j=1;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]=a[i]+a[i-1];
        while (a[i]-a[j-1] > s) j++;
        if ((a[i]-a[j-1]==s) && (s==0))
        {
          dem+=k;
          k++;
        }
        else
        if (a[i]-a[j-1]==s)
             {
                  k=1;
                  if (a[i]-a[j-1] == s)
                    if (a[j]-a[j-1] == 0) dem+=2;
                    else dem++;
             }
    }
    cout << dem;
}
    
