#include <iostream>

using namespace std;

long long n,s;

int main()
{
    cin >> n;
    while (n > 0)
    {
        if (n%10%2 != 0) s+=n%10;
        n=n/10;
    }
    cout << s;
}