#include <iostream>
#include <algorithm>

using namespace std;

long long a,b,c,d;

int main()
{
    cin >> a >> b >> c >> d;
    cout << min(min(min(a,b),c),d);
}