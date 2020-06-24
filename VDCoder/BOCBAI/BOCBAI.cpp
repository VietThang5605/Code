#include <iostream>
#include <algorithm>

using namespace std;

int a[1000001];
int n,i,j,s1,s2;
bool kt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+1+n,greater<int>());
    s1=a[1];
    for (i=2;i<=n;i++)
        if (kt == false)
        {
            for (j=i;(j<=i+1)&&(j<=n);j++)
                s2=s2+a[j];
            i=j-1;
            kt=true;
        }
        else
        {
            for (j=i;(j<=i+1)&&(j<=n);j++)
                s1=s1+a[j];
            i=j-1;
            kt=false;
        }
    if (s1 == s2) cout << "HOA";
    else 
        if (s1 > s2) cout << "THANG";
        else 
            cout << "THUA";
}