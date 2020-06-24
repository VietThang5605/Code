#include <iostream>
#include <math.h>

using namespace std;

long long x,xo,m,a,t;

int main()
{
    cin >> m >> xo >> x >> t;
    cout << abs(m*((x-xo)*2/(t*t)));
}