#include <iostream>
#include <algorithm>

using namespace std;


struct mang
{
     int x,y;
};

bool ss(mang c,mang v)
{
     if (c.x == v.x)
          return (c.y > v.y);
     else
          return (c.x < v.x);
}

mang a[10001];
int dem,i,n,max1,tg,tam;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cin >> n;
     for (i=1;i<=n;i++)
          cin >> a[i].x >> a[i].y;
     sort(a+1,a+1+n,ss);
     dem=a[1].y-a[1].x;
     tam=a[1].y;
     for (i=2;i<=n;i++)
          if (a[i].x <= tam)
          {
               if (a[i].y <= tam) continue;
               tg=a[i].y-tam;
               dem+=tg;
               tam=a[i].y;
          }
          else
          {
               if (dem > max1) max1=dem;
               dem=a[i].y-a[i].x;
               tam=a[i].y;
          }
     if (dem > max1) max1=dem;
     cout << max1;
}
    