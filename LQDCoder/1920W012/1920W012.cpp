#include <iostream>

using namespace std;

long long n,s;

int main()
{
    cin >> n;
    while (n != 0)
    {
        n=n/5;
        s=s+n;
    }
    cout << s;
}