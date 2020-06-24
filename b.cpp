#include <iostream>

using namespace std;

int n, i, dem;

bool isprime(int a)
{
    if (a < 2) 
        return false;
    for (int j = 2; j * j <= a; j++)
        if (a % j == 0)
            return false;
    return true;
}

int main()
{
    cin >> n;
    for (i = 2; i <= n/2; i++)
        if (isprime(i) && isprime(n - i))
            dem++;
    cout << dem;
}