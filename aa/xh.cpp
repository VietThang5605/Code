#include <iostream>

using namespace std;

int n, i, Count;
int a[30001];

void read()
{
    for (i = 1; i <= n; i++)
        cin >> a[i];
}

void solve()
{
    for (i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
        {
            if (i + 1 <= n)
            {
                if (a[i + 1] <= a[i - 1])
                    a[i] = a[i + 1];
                else 
                    a[i] = a[i - 1];
            }
            Count++;
        }
        else
        {
            if (i + 1 <= n)
            {
                if (a[i + 1] <= a[i - 1])
                {
                    a[i] = a[i + 1];
                    Count++;
                }
            }
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    
}