#include <iostream>

using namespace std;

unsigned long long pow(unsigned long long a,unsigned long long n)
{
    if(n == 1) {
        return a%10000;
    } else {
        int temp = pow(a, n/2)%10000;
        if(n % 2 == 0)
            return (temp%10000 * temp%10000)%10000;
        else
            return (((temp%10000 * temp%10000)) * a%10000)%10000;
    }
}

unsigned long long x,y;

int main()
{
    cin >> x >> y;
    cout << pow(x,y)%10000;
}