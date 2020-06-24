#include <iostream>

using namespace std;

long long a = 1,b = 2,i,m,c,n,dem;

int main()
{
    cin >> n >> m;
    dem=3;
	if (m != 1)
		for (i=3;(a != 1) || (b != 1);i++)
		{
			dem++;
			c=(a+b)%m;
			a=b%m;
			b=c%m;
		}
    n=n%(dem-2);
    c=0;
    if (n == 1) cout << 1;
	else 
		if (n == 2) cout << 2;
		else 
		{
			a=1;
			b=2;
			for (i=3;i<=n;i++)
			{
				c=(a+b)%m;
				a=b%m;
				b=c%m;
			}
			cout << c;
		}
}