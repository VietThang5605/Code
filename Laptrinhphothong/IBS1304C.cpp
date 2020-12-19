#include <bits/stdc++.h>

using namespace std;

struct arr /// arr = array
{
     int val, pos; /// val = value, pos = positition
};

bool cmp(arr x, arr y) /// cmp = compare
{
     return x.val < y.val;
}

arr a[100005];
int n, x, q;

int bs(int l, int r)
{
     if (l <= r)
     {
          int mid = (l + r) / 2;
          if (a[mid].val == x)
               return a[mid].pos;
          
     }
     return 0;
}

int main()
{
     ios::sync_with_stdio(0);
     cin >> n >> q;
     for (int i = 1; i <= n; i++)
     {
          cin >> a[i]. val;
          a[i].pos = i;
     }
     cin >> q;
     while (q--)
     {
          cin >> x;
          cout << bs(1, n);
     }
}