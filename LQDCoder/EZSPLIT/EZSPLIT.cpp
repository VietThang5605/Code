#include <iostream>

using namespace std;

long long n,i,dem=1,s=1,tg=1;
long long a[100001];

int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    for (i=2;i<=n;i++)
        if (a[i]==a[i-1])
            tg=tg*2%1000000007;
        else 
        {
            s=(tg*s)%1000000007;
            tg=1;
        }
    s=(tg*s)%1000000007;
    cout << s%1000000007;
}