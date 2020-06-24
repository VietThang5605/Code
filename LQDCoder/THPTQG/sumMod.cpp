#include <iostream>

using namespace std;

long long n,m,i,s;

int main()
{
    cin >> n >> m;
    s=s+(n-1)*n/2*(m/n);
    for (i=1;i<=m%n;i++)
        s=s+i;
}