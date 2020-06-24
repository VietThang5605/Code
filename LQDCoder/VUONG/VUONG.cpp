#include <iostream>

using namespace std;

long long a,b,c,d,n,s;

int main()
{
    cin >> n;
    cin >> a >> b >> c >> d;
    s=a+b+c+d;
    while (n != 1)
    {
        s=s*2;
        n--;
    }
    cout << s;
}