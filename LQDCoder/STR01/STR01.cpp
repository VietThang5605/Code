#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string st;
	int dem = 0;
	char ch;
	getline(cin,st);
	cin >> ch;
	for (int i = 0;i < st.length();i++)
		if (st[i] == ch) dem++;
	cout << dem;
}