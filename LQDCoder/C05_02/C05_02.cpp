#include <iostream>

using namespace std;

long long n;

int main()
{
    cin >> n;
    if (n%2 == 0)
        n-=1;
    cout << (1+n)*((n-1)/2+1)/2;
}