#include <iostream>
#include <algorithm>

using namespace std;

string s;
int n,i;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (i=1;i<=n;i++)
	s=s+to_string(i);
    do {
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
}
