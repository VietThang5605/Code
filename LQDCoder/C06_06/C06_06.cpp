#include <iostream>

using namespace std;

long long i,n,m;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> m;
    for (i=1;i<=n;i++)
        if (n%i == 0 && m%i == 0)
            cout << i << " ";
}