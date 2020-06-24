#include <iostream>
#include <algorithm>

using namespace std;

long long a,b,c;

int main()
{
    cin >> a >> b >> c;
    cout << max(max(a,b),c);
}