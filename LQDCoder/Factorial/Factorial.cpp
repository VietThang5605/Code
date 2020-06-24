#include <iostream>

using namespace std;

int n,i,s=1;

int main()
{
    cin >> n;
    for (i=2;i<=n;i++)
        s*=i;
    cout << s;
}