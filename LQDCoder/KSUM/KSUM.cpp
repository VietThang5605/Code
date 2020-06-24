#include <iostream>

using namespace std;

long long n,i=1;

int main()
{
    cin >> n;
    while (n > 0)
    {
        n=n-i;
        i++;
    }
    if (n == 0) cout << i-1;
    else cout << "NO";
}