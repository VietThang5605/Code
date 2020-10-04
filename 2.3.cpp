#include <iostream>

using namespace std;

int check[1000005];
int i, j, mod;

int pow(int a, int b)
{
    if (b == 1)
        return a % mod;
    int tmp = pow(a, b / 2) % mod;
    if (b % 2 == 0)
        return (tmp % mod) * (tmp % mod) % mod;
    return (tmp % mod) * (tmp % mod) * (a % mod) % mod;
}

int main()
{
    check[0] = check[1] = 1;
    for (i = 2; i * i <= 1000000; i++)
        if (check[i] == 0)
            for (j = i; j * i <= 1000000; j++)
                check[i * j] = 1;
    for (i = 1; i <= 1000000; i++)
    {
        mod = i;
        if ((pow(2, i) == 2) && (check[i] == 1))
            cout << i << " ";
    }
}