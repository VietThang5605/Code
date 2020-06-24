#include <iostream>

using namespace std;

long long a[1001];
long long n,i,d;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (n == 1) cout << "NO";
    else 
    {
        for (i=1;i<=n;i++)
        cin >> a[i];
        if (n == 2) cout << a[2]-a[1];
        else 
        {
            d=a[2]-a[1];
            for (i=3;i<=n;i++)
                if (a[i]-a[i-1] != d)
                {
                    cout << "NO";
                    return 0;
                }
            cout << d;
        }
    }
    
}
    