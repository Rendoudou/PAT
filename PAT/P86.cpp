/*#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
#include <map>
using namespace std;

int main()
{
	long a = 0, b = 0;
	cin >> a >> b;
	long c = 0;
	c = a * b;
	string str_c = to_string(c);
	reverse(str_c.begin(), str_c.end());
	
	int start = 0;
	for (start; start < str_c.size(); start++)
	{
		if (str_c[start] != '0')
			break;
	}
	for (start; start < str_c.size(); start++)
		cout << str_c[start];


	return 0;
}*/
