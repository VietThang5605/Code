#include <iostream>

using namespace std;

int a,b,i,dem;

int main()
{
    cin >> a >> b;
    for (i=1;i<=a;i++)
        if (a%i == 0 && b%i == 0)
            dem++;
    cout << dem;
}