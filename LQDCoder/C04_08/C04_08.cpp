#include <iostream>
#include <algorithm>

using namespace std;

long long a,b;

int main()
{
    cin >> a >> b;
    cout << min(a,b) << " " << max(a,b);
}