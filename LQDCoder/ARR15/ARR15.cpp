#include <iostream>

using namespace std;

int main()
{
	long long a[100000];
	a[0]=0;
	int n,i,t,u,v,tam;
	cin >> n >> t;
	for (i=1;i<=n;i++)
	{
		cin >> tam;
		a[i]=tam+a[i-1];
	}
	for (i=1;i<=t;i++)
	{
		cin >> u >> v;
		cout << a[v] - a[u-1] << endl;
	}
}
