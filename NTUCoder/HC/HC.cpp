#include <bits/stdc++.h>

using namespace std;

long long sa, sb, t, x, y, a, b, c[1000006], i, n;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin >> n >> t;
	
	for (i = 1; i <= n; i++) {
		cin >> a >> b;
		sa += a; sb += b;
		x = a / b; y = a % b;
		if (x <= t) c[x] += b - y, c[x + 1] += y;
 	}

 	cout << sa << "\n"; sb -= c[0];

 	for (i = 1; i <= t; i++) {
 		sa -= sb; sb -= c[i];
 		cout << sa << "\n";
	}
}
    