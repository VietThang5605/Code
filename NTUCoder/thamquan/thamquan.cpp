#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	freopen("SIGHT.inp","r",stdin);
	freopen("SIGHT.out","w",stdout);
	int a[200],b[200],c[200];
	int n,m,i,j,tong = 0;
	cin >> n >> m;
	for (i=1;i<=n;i++) cin >> a[i];
	for (i=1;i<=m;i++)
	{
		cin >> b[i];
		c[i]=i;
	}
	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i] > a[j]) swap(a[i],a[j]);
	for (i=1;i<m;i++)
		for (j=i+1;j<=m;j++)
			if (b[i] > b[j]) 
			{
				swap(b[i],b[j]);
				swap(c[i],c[j]);
			}
	for (i=1;i<=n;i++)
		tong=tong+a[i]*b[n-i+1];
	cout << tong << endl;
}
