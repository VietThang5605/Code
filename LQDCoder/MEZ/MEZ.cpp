#include <iostream>

using namespace std;

long long s=1,tg,i,n;

int main()
{
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        s=(s*tg)%1000000007;
    }
    cout << s;
}