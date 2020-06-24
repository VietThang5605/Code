#include <iostream>

using namespace std;

long long n;

int main()
{
    cin >> n;
    if (n == 1) cout << 0;
    else 
    {
        if (n%2 != 0) n--;
            cout << (2+n)/2;
    }
}