#pragma warning(disable : 4996)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;

vector<string> first_check;

int main()
{

	string buffer_in;
	getline(cin, buffer_in);
	int tou = 0, wei = 0, length = buffer_in.size();

	bool flag_tou = true, flag_wei = true, out_flag = false;
	int count_zero = 0;
	for (int i = 0; i < length; i++)
	{
		if (flag_tou && buffer_in[i] == '1') //还没出现头 此时出现了‘1’头
		{
			tou = i;
			flag_tou = false;
		}
		if (flag_tou == false && flag_wei)  //开始找尾部
		{
			if (buffer_in[i] == '1')
			{
				wei = i;
				continue;
			}
			if (buffer_in[i] == '0')
			{
				count_zero++;
				if (count_zero == 2)
				{
					out_flag = true;
					flag_wei = false;
				}
			}
		}
		if (out_flag || (i == length - 1 && flag_tou == false && out_flag == false))
		{
			first_check.push_back(buffer_in.substr(tou, wei - tou + 1));
			out_flag = false;
			flag_tou = true;
			flag_wei = true;
			count_zero = 0;
		}
	}

	cout << "结果" << endl;
	cout << first_check.size() << endl;

	for (unsigned int i = 0; i < first_check.size(); i++)
	{
		cout << first_check[i] << endl;
	}

	return 0;
}