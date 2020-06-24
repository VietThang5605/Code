#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string st;
	int dem = 0;
	getline(cin,st);
	for (int i = 0;i<st.length();i++)
		if ((st[i] == '1') || (st[i] == '3') || (st[i] == '5') || (st[i] == '7') || (st[i] == '9'))
			dem++;
	cout << dem;
}