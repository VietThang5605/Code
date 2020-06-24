#include <bits/stdc++.h>
using namespace std;

int N, K, A, pos[100001], sum=0, ans=0;

main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> A;
        if (pos[sum] == 0) pos[sum] = i;
        sum = (sum + A) % K;
        if (pos[sum] != 0) ans = max(ans, i - pos[sum] + 1);
    }
    cout << ans;
}
    