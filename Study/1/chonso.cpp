#include<bits/stdc++.h>
#define task "chonso"
using namespace std;
long long F[2][100001],res;
int main() {
    int n,dem,a[100001];
    vector<int> trace;
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>a[i];
    F[0][0]=F[1][0]=0;
    for (int i=1; i<=n; i++) {
        F[0][i]=max(F[0][i-1],F[1][i-1]);
        F[1][i]=F[0][i-1]+a[i];
    }
    res=max(F[0][n],F[1][n]);
    cout<<res;
    dem=n;
    while (res>0) {
        if (res==F[1][dem]) {
            trace.push_back(dem);
            res=res-a[dem];
            dem=dem-2;
        } else
            dem--;
    }
    cout<<" "<<trace.size()<<endl;
    for (int i=trace.size()-1; i>=0; i--)
        cout<<trace[i]<<" ";
}