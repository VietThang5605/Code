#include <iostream>
#include <algorithm>

using namespace std;

long long n,i,j,max1,tg;  

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        if (tg > max1) max1=tg;
    }
    cout << max1;
}