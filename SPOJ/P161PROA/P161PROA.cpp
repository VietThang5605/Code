#include <iostream>
#include <math.h>

using namespace std;

long long n,i,tg;

bool kt(long long a)
{
    if (a < 2) return false;
    for (long long j =2;j<=sqrt(a);j++)
        if (a%j == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        long long tam=sqrt(tg);
        if ((tam*tam == tg) && (kt(tam) == true)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}