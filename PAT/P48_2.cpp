/*#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{

	string a, b;
	cin >> a >> b;
	int l1 = a.length(), l2 = b.length();
	int max = l1 > l2 ? l1 : l2;
	if (l1 > l2)
		for (int i = 0; i < l1 - l2; i++)
			b = '0' + b;
	else
		for (int i = 0; i < l2 - l1; i++)
			a = '0' + a;

	bool ji_wei = true;
	int res_temp = 0;
	for (int i = max - 1; i >= 0; i--)
	{
		if (ji_wei) // ÆæÊýÎ»
		{
			res_temp = (int(a[i] - '0') + int(b[i] - '0')) % 13;
			if (res_temp == 10)
				 b[i] = 'J';
			else if (res_temp == 11)
				 b[i] = 'Q';
			else if (res_temp == 12)
				 b[i] = 'K';
			else
				b[i] = char('0' + res_temp);
			ji_wei = false;
		}
		else
		{
			res_temp = b[i] - a[i];
			if (res_temp < 0)
				res_temp += 10;
			b[i] = (char('0' + res_temp));
			ji_wei = true;
		}
	}

	cout << b;

	return 0;
}*/