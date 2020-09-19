#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

vector <unsigned int> count_number(10);
vector <unsigned int> buffer;

bool sort_smaller(const unsigned int & a, const unsigned int & b)
{
	return a < b;
}

int main()
{
	for (int i = 0; i < 10; i++) 
		cin >> count_number[i];

	bool flag = true;
	unsigned int special_num = 0;
	for (int i = 0; i < 10; i++) 
	{
		if (flag && i != 0)//第一个非零数字拎出来
		{
			if (count_number[i] != 0)
			{
				special_num = i;
				flag = false;
				count_number[i]--;
			}
		}
		for (unsigned int j = 0; j < count_number[i]; j++)
			buffer.push_back(i);
	}
	cout << special_num;
	for (unsigned int i = 0; i < buffer.size(); i++)
		cout << buffer[i];

	return 0;

}