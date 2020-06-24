#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long a,b,c;

int main()
{
    cin >> a >> b;
    c = sqrt(a*a+b*b);
    if (c*c == a*a+b*b) cout << c;
    else 
    {
        c = ((long long)sqrt(max(a,b)*max(a,b) - min(a,b)*min(a,b)));
        if (c*c == (long long)(max(a,b)*max(a,b) - min(a,b)*min(a,b))) cout << c;
        else cout << 0;
    }
}