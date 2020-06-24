#include <iostream>
#include <algorithm>

using namespace std;

long long a,b;

int main()
{
    ios::sync_with_stdio(0);
    cin >> a >> b;
    cout << a/__gcd(a,b)  << "/" << b/__gcd(a,b);    
}