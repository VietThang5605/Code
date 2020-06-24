#include <iostream>

using namespace std;

long long n,i;

int main()
{
    cin >> n;
    for (i=1;i<=n/2;i++)
        if (n%i == 0)
            cout << i << " ";
    cout << n;
}