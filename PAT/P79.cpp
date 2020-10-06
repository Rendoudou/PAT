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

string str_add(const string &a, const string &b)
{
	string temp;
	int now = 0, jin = 0;
	for (int i = a.size() - 1; i >= 0; i--)
	{
		now = int(a[i] - '0') + int(b[i] - '0') + jin;
		jin = now / 10;
		now = now % 10;
		temp = char('0' + now) + temp;
	}
	if(jin > 0)
		temp = char('0' + jin) + temp;
	return temp;
}

int main(void)
{
	int count = 0;
	string str, str_reverse, str_add_temp;
	cin >> str;
	str_reverse = str;
	reverse(str_reverse.begin(), str_reverse.end());
	if (str == str_reverse)
	{
		cout << str << " is a palindromic number." << endl;
		return 0;
	}
	
	while (true)
	{
		str_add_temp = str_add(str, str_reverse);
		cout << str << " + " << str_reverse << " = " << str_add_temp << endl;
		str_reverse = str = str_add_temp;
		reverse(str_reverse.begin(), str_reverse.end());
		count++;
		if (str == str_reverse)
		{
			cout << str << " is a palindromic number." << endl;
			break;
		}
		if(count >= 10)
		{
			cout << "Not found in 10 iterations." << endl;
			break;
		}
	}

	return 0;
}*/
