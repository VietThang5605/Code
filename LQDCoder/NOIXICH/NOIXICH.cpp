#include <iostream>
#include <algorithm>

using namespace std;

long long a[200001];
long long dem,i,j,n;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cin >> n;
     for (i=1;i<=n;i++)
          cin >> a[i];
     sort(a+1,a+1+n);
     i=1;
     j=n;
     while (i < j)
     {
          if (a[i] > 0)
          {
               a[i]--;
               dem++;
               j--;
          }
          else i++;
     }
     cout << dem;
}
