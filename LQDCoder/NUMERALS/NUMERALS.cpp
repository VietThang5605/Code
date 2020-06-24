#include <iostream>

using namespace std;

long long a[1001];
long long n,i;
bool kt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    while (n != 1)
    {
        if (kt == false)
        {
            for (i=1;i<n;i++)
                a[i]=(a[i]+a[i+1])%1000000007;
            kt=true;
        }
        else 
        {
            for (i=1;i<n;i++)
                a[i]=(a[i]*a[i+1])%1000000007;
            kt=false;
        }
        n--;
    }
    cout << a[1];
}