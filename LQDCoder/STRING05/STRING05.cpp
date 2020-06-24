#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string st;
	getline(cin,st);
	for (int i = 0;i < st.length();i++)
		if (st[i] == toupper(st[i]))
			st[i]=tolower(st[i]);
		else 
			st[i]=toupper(st[i]);
	cout << st;
}