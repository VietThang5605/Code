#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

long long a[10001], b[10001], c[10001];
long long n, i, ans, ii, temp;

void quickSort(int l , int r)
{
	// If the first index less or equal than the last index
	if (l <= r)
	{
		// Create a Key/Pivot Element
		int key = a[(l+r)/2];
 
		// Create temp Variables to loop through array
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (a[i] < key)
				i++;
			while (a[j] > key)
				j--;
 
			if (i <= j)
			{
                if (a[i] == a[j])
                {
                    if (b[i] > b[j])
                    {
                        swap(a[i], a[j]);
                        swap(b[i], b[j]);
                        swap(c[i], c[j]);
                    }
                }
				else
                {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    swap(c[i], c[j]);
                }
				i++;
				j--;
			}
		}
 
		// Recursion to the smaller partition in the array after sorted above
		// Reference Giải Thuật Đệ Quy :: STDIO.VN
		if (l < j)
			quickSort(l, j);
		if (r > i)
			quickSort(i, r);
	}
}

int main()
{
    freopen("MEETING.inp","r",stdin);
    freopen("MEETING.out","w",stdout);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        c[i] = i;
    }
    quickSort(1,n);
    for (i = 1; i <= n; i++)
    {
        temp = (upper_bound(a + 1, a + 1 + n, b[i]) - a) - (lower_bound(a + 1, a + 1 + n, a[i]) - a);
        if (temp > ans)
        {
            ans = temp;
            ii = i;
        }
    }
    cout << ans << "\n";
    sort(c + ii, c + ii + ans);
    for (i = ii ; i <= ii + ans - 1; i++)
        cout << c[i] << "\n";
}