#include <iostream>
#include <math.h>

using namespace std;

long long x, n;

int main()
{
    cin >> n;
    n*=2;
    x=sqrt(n);
    if (x*(x + 1) == n) 
        cout << "YES"; 
    else 
        cout << "NO";
}
    