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
	string str_buffer;
	getline(cin, str_buffer);
	long sum = 0;
	for (int i = 0; i < str_buffer.length(); i++)
	{
		if (str_buffer[i] >= 'a' && str_buffer[i] <= 'z')
			sum += int(str_buffer[i] - 'a') + 1;
		else if (str_buffer[i] >= 'A' && str_buffer[i] <= 'Z')
			sum += int(str_buffer[i] - 'A') + 1;
	}

	long temp = sum;
	int count_zero = 0;
	int count_one = 0;

	while (temp != 0)
	{
		if (temp % 2 == 0)
			count_zero++;
		else
			count_one++;
		temp = temp / 2;
	}

	cout << count_zero << ' ' << count_one;
	return 0;
}*/
