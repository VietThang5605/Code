#include <iostream>

using namespace std;

int main()
{
	int a[100000];
	int n,i,tg,max;
	long long s = 0;
	memset(a,0,sizeof(a)+1);
	cin >> n;
	for (i=1;i<=n;i++)
	{
		cin >> tg;
		if (tg > max) max=tg;
		a[tg]++;
	}
	for (i=1;i<=max;i++)
		s=s+(a[i]*(a[i]-1))/2;
	cout << s;
}
