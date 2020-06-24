#include <iostream>

using namespace std;

long long x,n,i,s = 1;

int main()
{
	cin >> x >> n;
	for (i=1;i<=n%10000;i++)
        s=(s*x)%10000;
	cout << s;
}