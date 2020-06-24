#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int dem = 0;
	char ch;
	do 
	{
		ch = getchar();
		dem++;
	}while (ch != '1');
	cout << dem-1;
}