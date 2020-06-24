#include <iostream>

using namespace std;

long long a = 1,b = 2,i,c,n,dem,t;
long long d[27879435];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dem=3;
    d[1]=1;
    d[2]=2;
		for (i=3;(a != 1) || (b != 1);i++)
		{
			dem++;
			c=(a+b)%111539786;
			a=b%111539786;
			b=c%111539786;
            d[i]=c;
		}
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        n=n%(dem-2);
        cout << d[n] << "\n";
        t--;
    }
}