#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	bool kt = false;
	long long n,i,min,j,a,b,min2;
	cin >> n;
	min=(n+1)*2;
	a=1;
	b=n;
	min2=n;
	for (i=1;i<=ceil(sqrt(n));i++)
	{
		for (j=i;j<=ceil(sqrt(n))+ceil(sqrt(n));j++)
			if ((2*(i+j) <= min) && (i*j >= n))
			{
				if (2*(i+j) == min)
				{
					if (i*j < min2)
					{
						a=i;
						b=j;
						min2=i*j;
					}
				}
				else
				{
					a=i;
					b=j;
					min=2*(i+j);
					min2=i*j;
				}
			}
	}
	cout << a << " " << b;
}

