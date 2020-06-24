#include <iostream>

long long n;

using namespace std;

int main()
{
	cin >> n;
    if (n == 1) cout << 1;
    else 
    {
    	for (int i = 2;i*i<=n;i++)
    	{
    		while (n%i == 0)
    		{
    			cout << i;
    			n=n/i;
    			if (n > 1) cout << "*";
			}
		}
		if (n > 1) cout << n;
	}
}