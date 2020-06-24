#include <iostream>

using namespace std;

long long a,b,c,d,min1=LLONG_MAX;

int main()
{
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (a < min1) min1 = a;
    if (b < min1) min1 = b;
    if (c < min1) min1 = c;
    if (d < min1) min1 = d;
    cout << a-min1+b-min1+c-min1+d-min1;
}