#include <iostream>

using namespace std;

long long s = 1,n,i,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        s=s*(tg-i+1)%1000000007;
    }
    cout << s;
}