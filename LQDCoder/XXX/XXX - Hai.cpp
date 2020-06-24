include <bits/stdc++.h>
using namespace std;

const int base = 1000000007;
long long gt(int n)
{
   long long int res = 1;
   for (int i = 1; i <= n; i++)
   {
       res *= i;
       res %= base;
   }
   return res;
}
long long power(int x, long long y)
{
   long long t;
   if(y == 0)
       return 1;
   t = power(x, y / 2) % base;
   if (y % 2 == 0)
       return (t % base) * (t % base);
   else
   {
           return (x * t % base * t % base);
   }
}
int main()
{
   int n,p;
   while (cin>>n>>p)
   {
       long long int a = gt(n-1), b = (gt(p-1)*gt(n-p)) % base;
       cout<<a*(power(b,base-2)) % base<<"\n";
   }
   return 0;
}