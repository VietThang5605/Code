#include <iostream>
#include <algorithm>

using namespace std;

long long a,b;

int main()
{
    cin >> a >> b;
    cout << __gcd(a,b) << " " << a*b/__gcd(a,b);
}